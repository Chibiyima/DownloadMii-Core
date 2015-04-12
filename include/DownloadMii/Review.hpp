//    _____                      _                 _ __  __ _ _ 
//   |  __ \                    | |               | |  \/  (_|_)
//   | |  | | _____      ___ __ | | ___   __ _  __| | \  / |_ _ 
//   | |  | |/ _ \ \ /\ / / '_ \| |/ _ \ / _` |/ _` | |\/| | | |
//   | |__| | (_) \ V  V /| | | | | (_) | (_| | (_| | |  | | | |
//   |_____/ \___/ \_/\_/ |_| |_|_|\___/ \__,_|\__,_|_|  |_|_|_|
//                                                              
//   ©2014-2015 Filiph Sandström & Contributors
//   Please see the LICENSE for more info!
//
//	File name: Review.hpp
//	Description: This file contains the review struct and related function(s)
//
#pragma once
#include <iostream>
#include <vector>
#include <zlib.h>

namespace DownloadMii {
	struct ApplicationReview {
		std::string reviwer;
		std::string review;
		float raiting;
		unsigned char* avatar;
	};
}