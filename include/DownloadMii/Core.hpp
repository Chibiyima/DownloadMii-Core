//    _____                      _                 _ __  __ _ _ 
//   |  __ \                    | |               | |  \/  (_|_)
//   | |  | | _____      ___ __ | | ___   __ _  __| | \  / |_ _ 
//   | |  | |/ _ \ \ /\ / / '_ \| |/ _ \ / _` |/ _` | |\/| | | |
//   | |__| | (_) \ V  V /| | | | | (_) | (_| | (_| | |  | | | |
//   |_____/ \___/ \_/\_/ |_| |_|_|\___/ \__,_|\__,_|_|  |_|_|_|
//                                                              
//   ©2014-2015 Filiph Sandström & Contributors
//   Please see the LICENSE for more info!
#pragma once
#include "AppDownloader.hpp"
#ifdef DOWNLOADMII_PLATFORM_3DS
#include <3ds.h>
#endif

namespace DownloadMii {
	class DownloadMii {
	public:
		DownloadMii();
		~DownloadMii();

		bool InternetConnection = false;
#ifdef DOWNLOADMII_PLATFORM_3DS
		httpcContext HttpcContext;
#endif
	private:
		bool testInternetConnection();
		AppDownloader appDownloader;
	};
}