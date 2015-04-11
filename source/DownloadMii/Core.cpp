//    _____                      _                 _ __  __ _ _ 
//   |  __ \                    | |               | |  \/  (_|_)
//   | |  | | _____      ___ __ | | ___   __ _  __| | \  / |_ _ 
//   | |  | |/ _ \ \ /\ / / '_ \| |/ _ \ / _` |/ _` | |\/| | | |
//   | |__| | (_) \ V  V /| | | | | (_) | (_| | (_| | |  | | | |
//   |_____/ \___/ \_/\_/ |_| |_|_|\___/ \__,_|\__,_|_|  |_|_|_|
//                                                              
//   ©2014-2015 Filiph Sandström & Contributors
//   Please see the LICENSE for more info!
#include "main.h"
#include "DownloadMii/Core.hpp"
#ifndef DOWNLOADMII_PLATFORM_3DS
#include <curl.h>
#else
#include <3ds.h>
#endif

namespace DownloadMii {
	DownloadMii::DownloadMii() {
		//Init Internet
#ifdef DOWNLOADMII_PLATFORM_3DS
		httpcInit();
#endif
		InternetConnection = testInternetConnection();

		//Init the AppDownloader
		appDownloader = AppDownloader();
	}

	DownloadMii::~DownloadMii() {

	}

	bool DownloadMii::testInternetConnection() {
	//TODO: load a smaller page for quicker results.
#ifdef DOWNLOADMII_PLATFORM_3DS
		Result result = httpcOpenContext(&HttpcContext, "http://www.downloadmii.com", 0);
		if (result != 0) {
			httpcCloseContext(&HttpcContext);
			return false;
		}
		result = httpcBeginRequest(&HttpcContext);
		if (result != 0) {
			httpcCloseContext(&HttpcContext);
			return false;
		}
		httpcCloseContext(&HttpcContext);
		return true;
#endif
		return false;
	}
}