//    _____                      _                 _ __  __ _ _ 
//   |  __ \                    | |               | |  \/  (_|_)
//   | |  | | _____      ___ __ | | ___   __ _  __| | \  / |_ _ 
//   | |  | |/ _ \ \ /\ / / '_ \| |/ _ \ / _` |/ _` | |\/| | | |
//   | |__| | (_) \ V  V /| | | | | (_) | (_| | (_| | |  | | | |
//   |_____/ \___/ \_/\_/ |_| |_|_|\___/ \__,_|\__,_|_|  |_|_|_|
//                                                              
//   �2014-2015 Filiph Sandstr�m & Contributors
//   Please see the LICENSE for more info!
#pragma once

#include <zlib.h>

namespace DownloadMii {
	class AppDownloader {
	public:
		/* Functions */
		AppDownloader();
		~AppDownloader();

		/* Vars */
		bool connected = false;
	private:
	};
}