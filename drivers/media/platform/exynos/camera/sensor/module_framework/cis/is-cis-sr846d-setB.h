/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2020 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_SR846D_SET_B_H
#define IS_CIS_SR846D_SET_B_H

#include "is-cis.h"
#include "is-cis-sr846.h"


/*
 * [Mode Information]
 *
 * Reference File : SR-846D_setting_v10.3_SEC2_20200907.xlsx
 * Update Data    : 2020-09-08
 * Author         : sush.maurya
 *
 *  - Global setting
 *
 *  - Mode setting
 *  - Default Mode setting For SR846D
 *  [ 0 ] 3264 x 2448(4:3)      @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  680, Mclk(Mhz): 26
 *  [ 1 ] 3264 x 1836(16:9)     @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  680, Mclk(Mhz): 26
 *  [ 2 ] 2640 x 1980(4:3)      @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  680, Mclk(Mhz): 26
 *  [ 3 ] 2880 x 1980(3:2)      @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  680, Mclk(Mhz): 26
 *  - FAST AE (4 binning) setting For SR846D
 *  [ 4 ] 800 x 600(4:3)        @60,  MIPI lane: 4, MIPI data rate(Mbps/lane):  172, Mclk(Mhz): 26
 *  [ 5 ] 800 x 600(4:3)        @112, MIPI lane: 4, MIPI data rate(Mbps/lane):  340, Mclk(Mhz): 26
 *  - VT Call (2 BIN) setting For SR846D
 *  [ 6 ] 1632 x 1224(4:3)      @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  340, Mclk(Mhz): 26
 *  [ 7 ] 1632 x 916(16:9)      @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  340, Mclk(Mhz): 26
 *
 */

const u32 sensor_sr846_setfile_B_Global[] = {
	0x0E16, 0x0100, 0x02,
	0x5000, 0x120B, 0x02,
	0x5002, 0x120A, 0x02,
	0x5004, 0x1209, 0x02,
	0x5006, 0x1208, 0x02,
	0x5008, 0x1207, 0x02,
	0x500A, 0x1206, 0x02,
	0x500C, 0x1205, 0x02,
	0x500E, 0x1204, 0x02,
	0x5010, 0x93C2, 0x02,
	0x5012, 0x00C1, 0x02,
	0x5014, 0x24F3, 0x02,
	0x5016, 0x425E, 0x02,
	0x5018, 0x00C2, 0x02,
	0x501A, 0xC35E, 0x02,
	0x501C, 0x425F, 0x02,
	0x501E, 0x82A0, 0x02,
	0x5020, 0xDF4E, 0x02,
	0x5022, 0x4EC2, 0x02,
	0x5024, 0x00C2, 0x02,
	0x5026, 0x934F, 0x02,
	0x5028, 0x24DF, 0x02,
	0x502A, 0x4217, 0x02,
	0x502C, 0x7316, 0x02,
	0x502E, 0x4218, 0x02,
	0x5030, 0x7318, 0x02,
	0x5032, 0x403E, 0x02,
	0x5034, 0x0AA0, 0x02,
	0x5036, 0xB3E2, 0x02,
	0x5038, 0x00C2, 0x02,
	0x503A, 0x24CB, 0x02,
	0x503C, 0x9382, 0x02,
	0x503E, 0x731C, 0x02,
	0x5040, 0x2003, 0x02,
	0x5042, 0x93CE, 0x02,
	0x5044, 0x0000, 0x02,
	0x5046, 0x23FA, 0x02,
	0x5048, 0x4E6F, 0x02,
	0x504A, 0xF21F, 0x02,
	0x504C, 0x731C, 0x02,
	0x504E, 0x23FC, 0x02,
	0x5050, 0x42D2, 0x02,
	0x5052, 0x0AA0, 0x02,
	0x5054, 0x0A80, 0x02,
	0x5056, 0x421A, 0x02,
	0x5058, 0x7300, 0x02,
	0x505A, 0x421B, 0x02,
	0x505C, 0x7302, 0x02,
	0x505E, 0x421E, 0x02,
	0x5060, 0x832A, 0x02,
	0x5062, 0x430F, 0x02,
	0x5064, 0x421C, 0x02,
	0x5066, 0x82CE, 0x02,
	0x5068, 0x421D, 0x02,
	0x506A, 0x82D0, 0x02,
	0x506C, 0x8E0C, 0x02,
	0x506E, 0x7F0D, 0x02,
	0x5070, 0x4C0E, 0x02,
	0x5072, 0x4D0F, 0x02,
	0x5074, 0x4A0C, 0x02,
	0x5076, 0x4B0D, 0x02,
	0x5078, 0x8E0C, 0x02,
	0x507A, 0x7F0D, 0x02,
	0x507C, 0x2CA6, 0x02,
	0x507E, 0x4A09, 0x02,
	0x5080, 0x9339, 0x02,
	0x5082, 0x3471, 0x02,
	0x5084, 0x4306, 0x02,
	0x5086, 0x5039, 0x02,
	0x5088, 0xFFFD, 0x02,
	0x508A, 0x43A2, 0x02,
	0x508C, 0x7316, 0x02,
	0x508E, 0x4382, 0x02,
	0x5090, 0x7318, 0x02,
	0x5092, 0x4214, 0x02,
	0x5094, 0x7544, 0x02,
	0x5096, 0x4215, 0x02,
	0x5098, 0x7546, 0x02,
	0x509A, 0x4292, 0x02,
	0x509C, 0x8318, 0x02,
	0x509E, 0x7544, 0x02,
	0x50A0, 0x4292, 0x02,
	0x50A2, 0x831A, 0x02,
	0x50A4, 0x7546, 0x02,
	0x50A6, 0x4A0E, 0x02,
	0x50A8, 0x4B0F, 0x02,
	0x50AA, 0x821E, 0x02,
	0x50AC, 0x832C, 0x02,
	0x50AE, 0x721F, 0x02,
	0x50B0, 0x832E, 0x02,
	0x50B2, 0x2C08, 0x02,
	0x50B4, 0x4382, 0x02,
	0x50B6, 0x7540, 0x02,
	0x50B8, 0x4382, 0x02,
	0x50BA, 0x7542, 0x02,
	0x50BC, 0x4216, 0x02,
	0x50BE, 0x82CE, 0x02,
	0x50C0, 0x8216, 0x02,
	0x50C2, 0x832C, 0x02,
	0x50C4, 0x12B0, 0x02,
	0x50C6, 0xFE78, 0x02,
	0x50C8, 0x0B00, 0x02,
	0x50CA, 0x7304, 0x02,
	0x50CC, 0x03AF, 0x02,
	0x50CE, 0x4392, 0x02,
	0x50D0, 0x731C, 0x02,
	0x50D2, 0x4482, 0x02,
	0x50D4, 0x7544, 0x02,
	0x50D6, 0x4582, 0x02,
	0x50D8, 0x7546, 0x02,
	0x50DA, 0x490A, 0x02,
	0x50DC, 0x4A0B, 0x02,
	0x50DE, 0x5B0B, 0x02,
	0x50E0, 0x7B0B, 0x02,
	0x50E2, 0xE33B, 0x02,
	0x50E4, 0x421E, 0x02,
	0x50E6, 0x8320, 0x02,
	0x50E8, 0x421F, 0x02,
	0x50EA, 0x8322, 0x02,
	0x50EC, 0x5A0E, 0x02,
	0x50EE, 0x6B0F, 0x02,
	0x50F0, 0x4E82, 0x02,
	0x50F2, 0x8320, 0x02,
	0x50F4, 0x4F82, 0x02,
	0x50F6, 0x8322, 0x02,
	0x50F8, 0x5226, 0x02,
	0x50FA, 0x460C, 0x02,
	0x50FC, 0x4C0D, 0x02,
	0x50FE, 0x5D0D, 0x02,
	0x5100, 0x7D0D, 0x02,
	0x5102, 0xE33D, 0x02,
	0x5104, 0x8226, 0x02,
	0x5106, 0x8C0E, 0x02,
	0x5108, 0x7D0F, 0x02,
	0x510A, 0x2C04, 0x02,
	0x510C, 0x4C82, 0x02,
	0x510E, 0x8320, 0x02,
	0x5110, 0x4D82, 0x02,
	0x5112, 0x8322, 0x02,
	0x5114, 0x4292, 0x02,
	0x5116, 0x8320, 0x02,
	0x5118, 0x7540, 0x02,
	0x511A, 0x4292, 0x02,
	0x511C, 0x8322, 0x02,
	0x511E, 0x7542, 0x02,
	0x5120, 0x5A07, 0x02,
	0x5122, 0x6B08, 0x02,
	0x5124, 0x421C, 0x02,
	0x5126, 0x831C, 0x02,
	0x5128, 0x430D, 0x02,
	0x512A, 0x470E, 0x02,
	0x512C, 0x480F, 0x02,
	0x512E, 0x8C0E, 0x02,
	0x5130, 0x7D0F, 0x02,
	0x5132, 0x2C02, 0x02,
	0x5134, 0x4C07, 0x02,
	0x5136, 0x4D08, 0x02,
	0x5138, 0x4782, 0x02,
	0x513A, 0x7316, 0x02,
	0x513C, 0x4882, 0x02,
	0x513E, 0x7318, 0x02,
	0x5140, 0x460F, 0x02,
	0x5142, 0x890F, 0x02,
	0x5144, 0x421E, 0x02,
	0x5146, 0x7324, 0x02,
	0x5148, 0x8F0E, 0x02,
	0x514A, 0x922E, 0x02,
	0x514C, 0x3401, 0x02,
	0x514E, 0x422E, 0x02,
	0x5150, 0x4E82, 0x02,
	0x5152, 0x7324, 0x02,
	0x5154, 0x9316, 0x02,
	0x5156, 0x3804, 0x02,
	0x5158, 0x4682, 0x02,
	0x515A, 0x7334, 0x02,
	0x515C, 0x0F00, 0x02,
	0x515E, 0x7300, 0x02,
	0x5160, 0xD3D2, 0x02,
	0x5162, 0x00C2, 0x02,
	0x5164, 0x3C4D, 0x02,
	0x5166, 0x9329, 0x02,
	0x5168, 0x3422, 0x02,
	0x516A, 0x490E, 0x02,
	0x516C, 0x4E0F, 0x02,
	0x516E, 0x5F0F, 0x02,
	0x5170, 0x7F0F, 0x02,
	0x5172, 0xE33F, 0x02,
	0x5174, 0x5E82, 0x02,
	0x5176, 0x7316, 0x02,
	0x5178, 0x6F82, 0x02,
	0x517A, 0x7318, 0x02,
	0x517C, 0x521E, 0x02,
	0x517E, 0x8320, 0x02,
	0x5180, 0x621F, 0x02,
	0x5182, 0x8322, 0x02,
	0x5184, 0x4E82, 0x02,
	0x5186, 0x7540, 0x02,
	0x5188, 0x4F82, 0x02,
	0x518A, 0x7542, 0x02,
	0x518C, 0x421E, 0x02,
	0x518E, 0x7300, 0x02,
	0x5190, 0x421F, 0x02,
	0x5192, 0x7302, 0x02,
	0x5194, 0x803E, 0x02,
	0x5196, 0x0003, 0x02,
	0x5198, 0x730F, 0x02,
	0x519A, 0x2FF8, 0x02,
	0x519C, 0x12B0, 0x02,
	0x519E, 0xFE78, 0x02,
	0x51A0, 0x0B00, 0x02,
	0x51A2, 0x7300, 0x02,
	0x51A4, 0x0002, 0x02,
	0x51A6, 0x0B00, 0x02,
	0x51A8, 0x7304, 0x02,
	0x51AA, 0x01F4, 0x02,
	0x51AC, 0x3FD9, 0x02,
	0x51AE, 0x0B00, 0x02,
	0x51B0, 0x7304, 0x02,
	0x51B2, 0x03AF, 0x02,
	0x51B4, 0x4392, 0x02,
	0x51B6, 0x731C, 0x02,
	0x51B8, 0x4292, 0x02,
	0x51BA, 0x8320, 0x02,
	0x51BC, 0x7540, 0x02,
	0x51BE, 0x4292, 0x02,
	0x51C0, 0x8322, 0x02,
	0x51C2, 0x7542, 0x02,
	0x51C4, 0x12B0, 0x02,
	0x51C6, 0xFE78, 0x02,
	0x51C8, 0x3FCB, 0x02,
	0x51CA, 0x4A09, 0x02,
	0x51CC, 0x8219, 0x02,
	0x51CE, 0x82CE, 0x02,
	0x51D0, 0x3F57, 0x02,
	0x51D2, 0x4E6F, 0x02,
	0x51D4, 0xF21F, 0x02,
	0x51D6, 0x731C, 0x02,
	0x51D8, 0x23FC, 0x02,
	0x51DA, 0x9382, 0x02,
	0x51DC, 0x731C, 0x02,
	0x51DE, 0x2003, 0x02,
	0x51E0, 0x93CE, 0x02,
	0x51E2, 0x0000, 0x02,
	0x51E4, 0x23FA, 0x02,
	0x51E6, 0x3F34, 0x02,
	0x51E8, 0x9382, 0x02,
	0x51EA, 0x730C, 0x02,
	0x51EC, 0x23B9, 0x02,
	0x51EE, 0x42D2, 0x02,
	0x51F0, 0x0AA0, 0x02,
	0x51F2, 0x0A80, 0x02,
	0x51F4, 0x9382, 0x02,
	0x51F6, 0x730C, 0x02,
	0x51F8, 0x27FA, 0x02,
	0x51FA, 0x3FB2, 0x02,
	0x51FC, 0x0900, 0x02,
	0x51FE, 0x732C, 0x02,
	0x5200, 0x425F, 0x02,
	0x5202, 0x0788, 0x02,
	0x5204, 0x4292, 0x02,
	0x5206, 0x7544, 0x02,
	0x5208, 0x8318, 0x02,
	0x520A, 0x4292, 0x02,
	0x520C, 0x7546, 0x02,
	0x520E, 0x831A, 0x02,
	0x5210, 0x42D2, 0x02,
	0x5212, 0x0AA0, 0x02,
	0x5214, 0x0A80, 0x02,
	0x5216, 0x4134, 0x02,
	0x5218, 0x4135, 0x02,
	0x521A, 0x4136, 0x02,
	0x521C, 0x4137, 0x02,
	0x521E, 0x4138, 0x02,
	0x5220, 0x4139, 0x02,
	0x5222, 0x413A, 0x02,
	0x5224, 0x413B, 0x02,
	0x5226, 0x4130, 0x02,
	0x2000, 0x98EB, 0x02,
	0x2002, 0x00FF, 0x02,
	0x2004, 0x0007, 0x02,
	0x2006, 0x3FFF, 0x02,
	0x2008, 0x3FFF, 0x02,
	0x200A, 0xC216, 0x02,
	0x200C, 0x1292, 0x02,
	0x200E, 0xC01A, 0x02,
	0x2010, 0x403D, 0x02,
	0x2012, 0x000E, 0x02,
	0x2014, 0x403E, 0x02,
	0x2016, 0x0B80, 0x02,
	0x2018, 0x403F, 0x02,
	0x201A, 0x82AE, 0x02,
	0x201C, 0x1292, 0x02,
	0x201E, 0xC00C, 0x02,
	0x2020, 0x4130, 0x02,
	0x2022, 0x43E2, 0x02,
	0x2024, 0x0180, 0x02,
	0x2026, 0x4130, 0x02,
	0x2028, 0x7400, 0x02,
	0x202A, 0x5000, 0x02,
	0x202C, 0x0253, 0x02,
	0x202E, 0x0253, 0x02,
	0x2030, 0x0851, 0x02,
	0x2032, 0x00D1, 0x02,
	0x2034, 0x0009, 0x02,
	0x2036, 0x5020, 0x02,
	0x2038, 0x000B, 0x02,
	0x203A, 0x0002, 0x02,
	0x203C, 0x0044, 0x02,
	0x203E, 0x0016, 0x02,
	0x2040, 0x1792, 0x02,
	0x2042, 0x7002, 0x02,
	0x2044, 0x154F, 0x02,
	0x2046, 0x00D5, 0x02,
	0x2048, 0x000B, 0x02,
	0x204A, 0x0019, 0x02,
	0x204C, 0x1698, 0x02,
	0x204E, 0x000E, 0x02,
	0x2050, 0x099A, 0x02,
	0x2052, 0x0058, 0x02,
	0x2054, 0x7000, 0x02,
	0x2056, 0x1799, 0x02,
	0x2058, 0x0310, 0x02,
	0x205A, 0x03C3, 0x02,
	0x205C, 0x004C, 0x02,
	0x205E, 0x064A, 0x02,
	0x2060, 0x0001, 0x02,
	0x2062, 0x0007, 0x02,
	0x2064, 0x0BC7, 0x02,
	0x2066, 0x0055, 0x02,
	0x2068, 0x7000, 0x02,
	0x206A, 0x1550, 0x02,
	0x206C, 0x158A, 0x02,
	0x206E, 0x0004, 0x02,
	0x2070, 0x1488, 0x02,
	0x2072, 0x7010, 0x02,
	0x2074, 0x1508, 0x02,
	0x2076, 0x0004, 0x02,
	0x2078, 0x0016, 0x02,
	0x207A, 0x03D5, 0x02,
	0x207C, 0x0055, 0x02,
	0x207E, 0x08CA, 0x02,
	0x2080, 0x2019, 0x02,
	0x2082, 0x0007, 0x02,
	0x2084, 0x7057, 0x02,
	0x2086, 0x0FC7, 0x02,
	0x2088, 0x5041, 0x02,
	0x208A, 0x12C8, 0x02,
	0x208C, 0x5060, 0x02,
	0x208E, 0x5080, 0x02,
	0x2090, 0x2084, 0x02,
	0x2092, 0x12C8, 0x02,
	0x2094, 0x7800, 0x02,
	0x2096, 0x0802, 0x02,
	0x2098, 0x040F, 0x02,
	0x209A, 0x1007, 0x02,
	0x209C, 0x0803, 0x02,
	0x209E, 0x080B, 0x02,
	0x20A0, 0x3803, 0x02,
	0x20A2, 0x0807, 0x02,
	0x20A4, 0x0404, 0x02,
	0x20A6, 0x0400, 0x02,
	0x20A8, 0xFFFF, 0x02,
	0x20AA, 0x1292, 0x02,
	0x20AC, 0xC006, 0x02,
	0x20AE, 0x421F, 0x02,
	0x20B0, 0x0710, 0x02,
	0x20B2, 0x523F, 0x02,
	0x20B4, 0x4F82, 0x02,
	0x20B6, 0x831C, 0x02,
	0x20B8, 0x93C2, 0x02,
	0x20BA, 0x829F, 0x02,
	0x20BC, 0x241E, 0x02,
	0x20BE, 0x403D, 0x02,
	0x20C0, 0xFFFE, 0x02,
	0x20C2, 0x40B2, 0x02,
	0x20C4, 0xEC78, 0x02,
	0x20C6, 0x8324, 0x02,
	0x20C8, 0x40B2, 0x02,
	0x20CA, 0xEC78, 0x02,
	0x20CC, 0x8326, 0x02,
	0x20CE, 0x40B2, 0x02,
	0x20D0, 0xEC78, 0x02,
	0x20D2, 0x8328, 0x02,
	0x20D4, 0x425F, 0x02,
	0x20D6, 0x008C, 0x02,
	0x20D8, 0x934F, 0x02,
	0x20DA, 0x240E, 0x02,
	0x20DC, 0x4D0E, 0x02,
	0x20DE, 0x503E, 0x02,
	0x20E0, 0xFFD8, 0x02,
	0x20E2, 0x4E82, 0x02,
	0x20E4, 0x8324, 0x02,
	0x20E6, 0xF36F, 0x02,
	0x20E8, 0x2407, 0x02,
	0x20EA, 0x4E0F, 0x02,
	0x20EC, 0x5D0F, 0x02,
	0x20EE, 0x4F82, 0x02,
	0x20F0, 0x8326, 0x02,
	0x20F2, 0x5D0F, 0x02,
	0x20F4, 0x4F82, 0x02,
	0x20F6, 0x8328, 0x02,
	0x20F8, 0x4130, 0x02,
	0x20FA, 0x432D, 0x02,
	0x20FC, 0x3FE2, 0x02,
	0x20FE, 0x120B, 0x02,
	0x2100, 0x120A, 0x02,
	0x2102, 0x1209, 0x02,
	0x2104, 0x1208, 0x02,
	0x2106, 0x1207, 0x02,
	0x2108, 0x4292, 0x02,
	0x210A, 0x7540, 0x02,
	0x210C, 0x832C, 0x02,
	0x210E, 0x4292, 0x02,
	0x2110, 0x7542, 0x02,
	0x2112, 0x832E, 0x02,
	0x2114, 0x93C2, 0x02,
	0x2116, 0x00C1, 0x02,
	0x2118, 0x2405, 0x02,
	0x211A, 0x42D2, 0x02,
	0x211C, 0x8330, 0x02,
	0x211E, 0x82A0, 0x02,
	0x2120, 0x4392, 0x02,
	0x2122, 0x82D4, 0x02,
	0x2124, 0x1292, 0x02,
	0x2126, 0xC046, 0x02,
	0x2128, 0x4292, 0x02,
	0x212A, 0x7324, 0x02,
	0x212C, 0x832A, 0x02,
	0x212E, 0x93C2, 0x02,
	0x2130, 0x00C1, 0x02,
	0x2132, 0x244E, 0x02,
	0x2134, 0x4218, 0x02,
	0x2136, 0x7316, 0x02,
	0x2138, 0x4219, 0x02,
	0x213A, 0x7318, 0x02,
	0x213C, 0x421F, 0x02,
	0x213E, 0x0710, 0x02,
	0x2140, 0x4F0E, 0x02,
	0x2142, 0x430F, 0x02,
	0x2144, 0x480A, 0x02,
	0x2146, 0x490B, 0x02,
	0x2148, 0x8E0A, 0x02,
	0x214A, 0x7F0B, 0x02,
	0x214C, 0x4A0E, 0x02,
	0x214E, 0x4B0F, 0x02,
	0x2150, 0x803E, 0x02,
	0x2152, 0x0102, 0x02,
	0x2154, 0x730F, 0x02,
	0x2156, 0x283A, 0x02,
	0x2158, 0x403F, 0x02,
	0x215A, 0x0101, 0x02,
	0x215C, 0x832F, 0x02,
	0x215E, 0x43D2, 0x02,
	0x2160, 0x01B3, 0x02,
	0x2162, 0x4F82, 0x02,
	0x2164, 0x7324, 0x02,
	0x2166, 0x4292, 0x02,
	0x2168, 0x7540, 0x02,
	0x216A, 0x8320, 0x02,
	0x216C, 0x4292, 0x02,
	0x216E, 0x7542, 0x02,
	0x2170, 0x8322, 0x02,
	0x2172, 0x4347, 0x02,
	0x2174, 0x823F, 0x02,
	0x2176, 0x4F0C, 0x02,
	0x2178, 0x430D, 0x02,
	0x217A, 0x421E, 0x02,
	0x217C, 0x8320, 0x02,
	0x217E, 0x421F, 0x02,
	0x2180, 0x8322, 0x02,
	0x2182, 0x5E0C, 0x02,
	0x2184, 0x6F0D, 0x02,
	0x2186, 0x8A0C, 0x02,
	0x2188, 0x7B0D, 0x02,
	0x218A, 0x2801, 0x02,
	0x218C, 0x4357, 0x02,
	0x218E, 0x47C2, 0x02,
	0x2190, 0x8330, 0x02,
	0x2192, 0x93C2, 0x02,
	0x2194, 0x829A, 0x02,
	0x2196, 0x201C, 0x02,
	0x2198, 0x93C2, 0x02,
	0x219A, 0x82A0, 0x02,
	0x219C, 0x2404, 0x02,
	0x219E, 0x43B2, 0x02,
	0x21A0, 0x7540, 0x02,
	0x21A2, 0x43B2, 0x02,
	0x21A4, 0x7542, 0x02,
	0x21A6, 0x93C2, 0x02,
	0x21A8, 0x8330, 0x02,
	0x21AA, 0x2412, 0x02,
	0x21AC, 0x532E, 0x02,
	0x21AE, 0x630F, 0x02,
	0x21B0, 0x4E82, 0x02,
	0x21B2, 0x8320, 0x02,
	0x21B4, 0x4F82, 0x02,
	0x21B6, 0x8322, 0x02,
	0x21B8, 0x480C, 0x02,
	0x21BA, 0x490D, 0x02,
	0x21BC, 0x8E0C, 0x02,
	0x21BE, 0x7F0D, 0x02,
	0x21C0, 0x2C07, 0x02,
	0x21C2, 0x4882, 0x02,
	0x21C4, 0x8320, 0x02,
	0x21C6, 0x4982, 0x02,
	0x21C8, 0x8322, 0x02,
	0x21CA, 0x3C02, 0x02,
	0x21CC, 0x4A0F, 0x02,
	0x21CE, 0x3FC6, 0x02,
	0x21D0, 0x4137, 0x02,
	0x21D2, 0x4138, 0x02,
	0x21D4, 0x4139, 0x02,
	0x21D6, 0x413A, 0x02,
	0x21D8, 0x413B, 0x02,
	0x21DA, 0x4130, 0x02,
	0x21DC, 0x421F, 0x02,
	0x21DE, 0x7100, 0x02,
	0x21E0, 0x4F0E, 0x02,
	0x21E2, 0x503E, 0x02,
	0x21E4, 0xFFD8, 0x02,
	0x21E6, 0x4E82, 0x02,
	0x21E8, 0x7A04, 0x02,
	0x21EA, 0x421E, 0x02,
	0x21EC, 0x8324, 0x02,
	0x21EE, 0x5F0E, 0x02,
	0x21F0, 0x4E82, 0x02,
	0x21F2, 0x7A06, 0x02,
	0x21F4, 0x0B00, 0x02,
	0x21F6, 0x7304, 0x02,
	0x21F8, 0x0050, 0x02,
	0x21FA, 0x40B2, 0x02,
	0x21FC, 0xD081, 0x02,
	0x21FE, 0x0B88, 0x02,
	0x2200, 0x421E, 0x02,
	0x2202, 0x8326, 0x02,
	0x2204, 0x5F0E, 0x02,
	0x2206, 0x4E82, 0x02,
	0x2208, 0x7A0E, 0x02,
	0x220A, 0x521F, 0x02,
	0x220C, 0x8328, 0x02,
	0x220E, 0x4F82, 0x02,
	0x2210, 0x7A10, 0x02,
	0x2212, 0x0B00, 0x02,
	0x2214, 0x7304, 0x02,
	0x2216, 0x007A, 0x02,
	0x2218, 0x40B2, 0x02,
	0x221A, 0x0081, 0x02,
	0x221C, 0x0B88, 0x02,
	0x221E, 0x4392, 0x02,
	0x2220, 0x7A0A, 0x02,
	0x2222, 0x0800, 0x02,
	0x2224, 0x7A0C, 0x02,
	0x2226, 0x0B00, 0x02,
	0x2228, 0x7304, 0x02,
	0x222A, 0x022B, 0x02,
	0x222C, 0x40B2, 0x02,
	0x222E, 0xD081, 0x02,
	0x2230, 0x0B88, 0x02,
	0x2232, 0x0B00, 0x02,
	0x2234, 0x7304, 0x02,
	0x2236, 0x0255, 0x02,
	0x2238, 0x40B2, 0x02,
	0x223A, 0x0081, 0x02,
	0x223C, 0x0B88, 0x02,
	0x223E, 0x9382, 0x02,
	0x2240, 0x7112, 0x02,
	0x2242, 0x2402, 0x02,
	0x2244, 0x4392, 0x02,
	0x2246, 0x760E, 0x02,
	0x2248, 0x93D2, 0x02,
	0x224A, 0x01B2, 0x02,
	0x224C, 0x2003, 0x02,
	0x224E, 0x42D2, 0x02,
	0x2250, 0x0AA0, 0x02,
	0x2252, 0x0A80, 0x02,
	0x2254, 0x4130, 0x02,
	0x2256, 0xF0B2, 0x02,
	0x2258, 0xFFBF, 0x02,
	0x225A, 0x2004, 0x02,
	0x225C, 0x9382, 0x02,
	0x225E, 0xC314, 0x02,
	0x2260, 0x2406, 0x02,
	0x2262, 0x12B0, 0x02,
	0x2264, 0xC90A, 0x02,
	0x2266, 0x40B2, 0x02,
	0x2268, 0xC6CE, 0x02,
	0x226A, 0x8246, 0x02,
	0x226C, 0x3C02, 0x02,
	0x226E, 0x12B0, 0x02,
	0x2270, 0xCAB0, 0x02,
	0x2272, 0x42A2, 0x02,
	0x2274, 0x7324, 0x02,
	0x2276, 0x4130, 0x02,
	0x2278, 0x403E, 0x02,
	0x227A, 0x00C2, 0x02,
	0x227C, 0x421F, 0x02,
	0x227E, 0x7314, 0x02,
	0x2280, 0xF07F, 0x02,
	0x2282, 0x000C, 0x02,
	0x2284, 0x5F4F, 0x02,
	0x2286, 0x5F4F, 0x02,
	0x2288, 0xDFCE, 0x02,
	0x228A, 0x0000, 0x02,
	0x228C, 0xF0FE, 0x02,
	0x228E, 0x000F, 0x02,
	0x2290, 0x0000, 0x02,
	0x2292, 0x4130, 0x02,
	0x2294, 0x40B2, 0x02,
	0x2296, 0x3FFF, 0x02,
	0x2298, 0x0A8A, 0x02,
	0x229A, 0x4292, 0x02,
	0x229C, 0x826E, 0x02,
	0x229E, 0x0A9C, 0x02,
	0x22A0, 0x43C2, 0x02,
	0x22A2, 0x8330, 0x02,
	0x22A4, 0x1292, 0x02,
	0x22A6, 0xC018, 0x02,
	0x22A8, 0x93C2, 0x02,
	0x22AA, 0x0AA0, 0x02,
	0x22AC, 0x27FD, 0x02,
	0x22AE, 0x4292, 0x02,
	0x22B0, 0x0A9C, 0x02,
	0x22B2, 0x826E, 0x02,
	0x22B4, 0x4292, 0x02,
	0x22B6, 0x0A8A, 0x02,
	0x22B8, 0x2008, 0x02,
	0x22BA, 0x43D2, 0x02,
	0x22BC, 0x0A80, 0x02,
	0x22BE, 0x4130, 0x02,
	0x23FE, 0xC056, 0x02,
	0x3230, 0xFE94, 0x02,
	0x3232, 0xFC0C, 0x02,
	0x3236, 0xFC22, 0x02,
	0x323A, 0xFDDC, 0x02,
	0x323C, 0xFCAA, 0x02,
	0x323E, 0xFCFE, 0x02,
	0x3246, 0xE000, 0x02,
	0x3248, 0xCDB0, 0x02,
	0x324E, 0xFE56, 0x02,
	0x326A, 0x8302, 0x02,
	0x326C, 0x830A, 0x02,
	0x326E, 0x0000, 0x02,
	0x32CA, 0xFC28, 0x02,
	0x32CC, 0xC3BC, 0x02,
	0x32CE, 0xC34C, 0x02,
	0x32D0, 0xC35A, 0x02,
	0x32D2, 0xC368, 0x02,
	0x32D4, 0xC376, 0x02,
	0x32D6, 0xC3C2, 0x02,
	0x32D8, 0xC3E6, 0x02,
	0x32DA, 0x0003, 0x02,
	0x32DC, 0x0003, 0x02,
	0x32DE, 0x00C7, 0x02,
	0x32E0, 0x0031, 0x02,
	0x32E2, 0x0031, 0x02,
	0x32E4, 0x0031, 0x02,
	0x32E6, 0xFC28, 0x02,
	0x32E8, 0xC3BC, 0x02,
	0x32EA, 0xC384, 0x02,
	0x32EC, 0xC392, 0x02,
	0x32EE, 0xC3A0, 0x02,
	0x32F0, 0xC3AE, 0x02,
	0x32F2, 0xC3C4, 0x02,
	0x32F4, 0xC3E6, 0x02,
	0x32F6, 0x0003, 0x02,
	0x32F8, 0x0003, 0x02,
	0x32FA, 0x00C7, 0x02,
	0x32FC, 0x0031, 0x02,
	0x32FE, 0x0031, 0x02,
	0x3300, 0x0031, 0x02,
	0x3302, 0x82CA, 0x02,
	0x3304, 0xC164, 0x02,
	0x3306, 0x82E6, 0x02,
	0x3308, 0xC19C, 0x02,
	0x330A, 0x001F, 0x02,
	0x330C, 0x001A, 0x02,
	0x330E, 0x0034, 0x02,
	0x3310, 0x0000, 0x02,
	0x3312, 0x0000, 0x02,
	0x3314, 0xFC96, 0x02,
	0x3316, 0xC3D8, 0x02,
	0x0A20, 0x0000, 0x02,
	0x0E04, 0x0012, 0x02,
	0x002E, 0x1111, 0x02,
	0x0032, 0x1111, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x0040, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x09CF, 0x02,
	0x005C, 0x2101, 0x02,
	0x0006, 0x09BC, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0100, 0x02,
	0x000C, 0x0022, 0x02,
	0x0A22, 0x0000, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x0000, 0x02,
	0x0A12, 0x0CC0, 0x02,
	0x0A14, 0x0990, 0x02,
	0x0074, 0x09B6, 0x02,
	0x0076, 0x0000, 0x02,
	0x051E, 0x0000, 0x02,
	0x0200, 0x0400, 0x02,
	0x0A1A, 0x0C00, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0402, 0x0110, 0x02,
	0x0404, 0x00F4, 0x02,
	0x0408, 0x0000, 0x02,
	0x0410, 0x008D, 0x02,
	0x0412, 0x011A, 0x02,
	0x0414, 0x864C, 0x02,
	0x021C, 0x0001, 0x02,
	0x0C00, 0x9150, 0x02,
	0x0C06, 0x0021, 0x02,
	0x0C10, 0x0040, 0x02,
	0x0C12, 0x0040, 0x02,
	0x0C14, 0x0040, 0x02,
	0x0C16, 0x0040, 0x02,
	0x0A02, 0x0000, 0x02,
	0x0A04, 0x014A, 0x02,
	0x0418, 0x0000, 0x02,
	0x0128, 0x0025, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0041, 0x02,
	0x0122, 0x0371, 0x02,
	0x012C, 0x001E, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003B, 0x02,
	0x0126, 0x0373, 0x02,
	0x0746, 0x0050, 0x02,
	0x0748, 0x01D5, 0x02,
	0x074A, 0x022B, 0x02,
	0x074C, 0x03B0, 0x02,
	0x0756, 0x043F, 0x02,
	0x0758, 0x3F1D, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x6821, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0001, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC109, 0x02,
	0x0916, 0x061A, 0x02,
	0x0918, 0x0407, 0x02,
	0x091A, 0x0A0B, 0x02,
	0x091C, 0x0E08, 0x02,
	0x091E, 0x0A00, 0x02,
	0x090C, 0x03FA, 0x02,
	0x090E, 0x0030, 0x02,
	0x0954, 0x0089, 0x02,
	0x0956, 0x0000, 0x02,
	0x0958, 0xC980, 0x02,
	0x095A, 0x6180, 0x02,
	0x0710, 0x09B0, 0x02,
	0x0040, 0x0200, 0x02,
	0x0042, 0x0100, 0x02,
	0x0D04, 0x0000, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059D, 0x02,
	0x0F2A, 0x4124, 0x02,
	0x006A, 0x0100, 0x02,
	0x004C, 0x0100, 0x02,
};

const u32 sensor_sr846_setfile_B_3264x2448_30fps[] = {
	0x0A20, 0x0000, 0x02,
	0x002E, 0x1111, 0x02,
	0x0032, 0x1111, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x0040, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x09CF, 0x02,
	0x005C, 0x2101, 0x02,
	0x0006, 0x09DB, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0200, 0x02,
	0x000C, 0x0022, 0x02,
	0x0A22, 0x0000, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x0000, 0x02,
	0x0A12, 0x0CC0, 0x02,
	0x0A14, 0x0990, 0x02,
	0x0074, 0x09D5, 0x02,
	0x0076, 0x0000, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0A04, 0x014A, 0x02,
	0x0418, 0x0000, 0x02,
	0x0128, 0x0025, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0041, 0x02,
	0x0122, 0x0371, 0x02,
	0x012C, 0x001E, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003B, 0x02,
	0x0126, 0x0373, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x6821, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0001, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0710, 0x09B0, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC109, 0x02,
	0x0916, 0x061A, 0x02,
	0x0918, 0x0407, 0x02,
	0x091A, 0x0A0B, 0x02,
	0x091C, 0x0E08, 0x02,
	0x091E, 0x0A00, 0x02,
	0x090C, 0x03FA, 0x02,
	0x090E, 0x0030, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059D, 0x02,
	0x0F2A, 0x4124, 0x02,
	0x004C, 0x0100, 0x02,
};

/* 16:9 0x0 margin, EXTCLK 26Mhz */
const u32 sensor_sr846_setfile_B_3264x1836_30fps[] = {
	0x0A20, 0x0000, 0x02,
	0x002E, 0x1111, 0x02,
	0x0032, 0x1111, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x0172, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x089D, 0x02,
	0x005C, 0x2101, 0x02,
	0x0006, 0x09DB, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0200, 0x02,
	0x000C, 0x0022, 0x02,
	0x0A22, 0x0000, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x0000, 0x02,
	0x0A12, 0x0CC0, 0x02,
	0x0A14, 0x072C, 0x02,
	0x0074, 0x09D5, 0x02,
	0x0076, 0x0000, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0A04, 0x014A, 0x02,
	0x0418, 0x023E, 0x02,
	0x0128, 0x0025, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0041, 0x02,
	0x0122, 0x0371, 0x02,
	0x012C, 0x001E, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003B, 0x02,
	0x0126, 0x0373, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x6821, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0001, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0710, 0x074C, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC109, 0x02,
	0x0916, 0x061A, 0x02,
	0x0918, 0x0407, 0x02,
	0x091A, 0x0A0B, 0x02,
	0x091C, 0x0E08, 0x02,
	0x091E, 0x0A00, 0x02,
	0x090C, 0x03FA, 0x02,
	0x090E, 0x0030, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059D, 0x02,
	0x0F2A, 0x4124, 0x02,
	0x004C, 0x0100, 0x02,
};

/* 4:3 0x0 margin, EXTCLK 26Mhz*/
const u32 sensor_sr846_setfile_B_2640x1980_30fps[] = {
	0x0A20, 0x0000, 0x02,
	0x002E, 0x1111, 0x02,
	0x0032, 0x1111, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x012A, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x08E5, 0x02,
	0x005C, 0x2101, 0x02,
	0x0006, 0x09DB, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0200, 0x02,
	0x000C, 0x0022, 0x02,
	0x0A22, 0x0000, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x0138, 0x02,
	0x0A12, 0x0A50, 0x02,
	0x0A14, 0x07BC, 0x02,
	0x0074, 0x09D5, 0x02,
	0x0076, 0x0000, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0A04, 0x014A, 0x02,
	0x0418, 0x00EA, 0x02,
	0x0128, 0x0025, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0041, 0x02,
	0x0122, 0x0371, 0x02,
	0x012C, 0x001E, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003B, 0x02,
	0x0126, 0x0373, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x6821, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0001, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0710, 0x07DC, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC109, 0x02,
	0x0916, 0x061A, 0x02,
	0x0918, 0x0407, 0x02,
	0x091A, 0x0A0B, 0x02,
	0x091C, 0x0E08, 0x02,
	0x091E, 0x0A00, 0x02,
	0x090C, 0x03FA, 0x02,
	0x090E, 0x0030, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059D, 0x02,
	0x0F2A, 0x4124, 0x02,
	0x004C, 0x0100, 0x02,
};

/* 3:2 0x0 margin, EXTCLK 26Mhz*/
const u32 sensor_sr846_setfile_B_2880x1980_30fps[] = {
	0x0A20, 0x0000, 0x02,
	0x002E, 0x1111, 0x02,
	0x0032, 0x1111, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x012A, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x08E5, 0x02,
	0x005C, 0x2101, 0x02,
	0x0006, 0x09DB, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0200, 0x02,
	0x000C, 0x0022, 0x02,
	0x0A22, 0x0000, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x00C0, 0x02,
	0x0A12, 0x0B40, 0x02,
	0x0A14, 0x07BC, 0x02,
	0x0074, 0x09D5, 0x02,
	0x0076, 0x0000, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0A04, 0x014A, 0x02,
	0x0418, 0x00EA, 0x02,
	0x0128, 0x0025, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0041, 0x02,
	0x0122, 0x0371, 0x02,
	0x012C, 0x001E, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003B, 0x02,
	0x0126, 0x0373, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x6821, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0001, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0710, 0x07DC, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC109, 0x02,
	0x0916, 0x061A, 0x02,
	0x0918, 0x0407, 0x02,
	0x091A, 0x0A0B, 0x02,
	0x091C, 0x0E08, 0x02,
	0x091E, 0x0A00, 0x02,
	0x090C, 0x03FA, 0x02,
	0x090E, 0x0030, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059D, 0x02,
	0x0F2A, 0x4124, 0x02,
	0x004C, 0x0100, 0x02,
};

/* 4:3 FASTAE */
const u32 sensor_sr846_setfile_B_800x600_60fps[] = {
	0x0A20, 0x0000, 0x02,
	0x002E, 0x7711, 0x02,
	0x0032, 0x7711, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x0058, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x09B7, 0x02,
	0x005C, 0x4404, 0x02,
	0x0006, 0x04ED, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0200, 0x02,
	0x000C, 0x0322, 0x02,
	0x0A22, 0x0200, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x0008, 0x02,
	0x0A12, 0x0320, 0x02,
	0x0A14, 0x0258, 0x02,
	0x0074, 0x04E7, 0x02,
	0x0076, 0x0000, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0A04, 0x016A, 0x02,
	0x0418, 0x0018, 0x02,
	0x0128, 0x0027, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0044, 0x02,
	0x0122, 0x0374, 0x02,
	0x012C, 0x001F, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003E, 0x02,
	0x0126, 0x0376, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x7021, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0001, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0710, 0x026A, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC102, 0x02,
	0x0916, 0x0205, 0x02,
	0x0918, 0x0202, 0x02,
	0x091A, 0x0205, 0x02,
	0x091C, 0x0802, 0x02,
	0x091E, 0x0400, 0x02,
	0x090C, 0x00E6, 0x02,
	0x090E, 0x0003, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059F, 0x02,
	0x0F2A, 0x5124, 0x02,
	0x004C, 0x0100, 0x02,
};

/* 4:3 FASTAE 112fps*/
const u32 sensor_sr846_setfile_B_800x600_112fps[] = {
	0x0A20, 0x0000, 0x02,
	0x002E, 0x3311, 0x02,
	0x0032, 0x3311, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x02B0, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x075F, 0x02,
	0x005C, 0x4202, 0x02,
	0x0006, 0x02A4, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0200, 0x02,
	0x000C, 0x0122, 0x02,
	0x0A22, 0x0100, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x01A0, 0x02,
	0x0A12, 0x0320, 0x02,
	0x0A14, 0x0258, 0x02,
	0x0074, 0x029E, 0x02,
	0x0076, 0x0000, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0A04, 0x016A, 0x02,
	0x0418, 0x0000, 0x02,
	0x0128, 0x0025, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0041, 0x02,
	0x0122, 0x0371, 0x02,
	0x012C, 0x001E, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003B, 0x02,
	0x0126, 0x0373, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x6C21, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0005, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0710, 0x0270, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC105, 0x02,
	0x0916, 0x030C, 0x02,
	0x0918, 0x0304, 0x02,
	0x091A, 0x0708, 0x02,
	0x091C, 0x0B04, 0x02,
	0x091E, 0x0600, 0x02,
	0x090C, 0x01EC, 0x02,
	0x090E, 0x000B, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059D, 0x02,
	0x0F2A, 0x4924, 0x02,
	0x004C, 0x0100, 0x02,
};

const u32 sensor_sr846_setfile_B_1632x1224_30fps[] = {
	0x0A20, 0x0000, 0x02,
	0x002E, 0x3311, 0x02,
	0x0032, 0x3311, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x0040, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x09CF, 0x02,
	0x005C, 0x4202, 0x02,
	0x0006, 0x09DB, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0200, 0x02,
	0x000C, 0x0122, 0x02,
	0x0A22, 0x0100, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x0000, 0x02,
	0x0A12, 0x0660, 0x02,
	0x0A14, 0x04C8, 0x02,
	0x0074, 0x09D5, 0x02,
	0x0076, 0x0000, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0A04, 0x016A, 0x02,
	0x0418, 0x0000, 0x02,
	0x0128, 0x0025, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0041, 0x02,
	0x0122, 0x0371, 0x02,
	0x012C, 0x001E, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003B, 0x02,
	0x0126, 0x0373, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x6C21, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0005, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0710, 0x04E0, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC105, 0x02,
	0x0916, 0x030C, 0x02,
	0x0918, 0x0304, 0x02,
	0x091A, 0x0708, 0x02,
	0x091C, 0x0B04, 0x02,
	0x091E, 0x0600, 0x02,
	0x090C, 0x01EC, 0x02,
	0x090E, 0x000B, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059D, 0x02,
	0x0F2A, 0x4924, 0x02,
	0x004C, 0x0100, 0x02,
};

const u32 sensor_sr846_setfile_B_1632x916_30fps[] = {
	0x0A20, 0x0000, 0x02,
	0x002E, 0x3311, 0x02,
	0x0032, 0x3311, 0x02,
	0x0022, 0x0008, 0x02,
	0x0026, 0x0174, 0x02,
	0x0028, 0x0017, 0x02,
	0x002C, 0x089B, 0x02,
	0x005C, 0x4202, 0x02,
	0x0006, 0x09DB, 0x02,
	0x0008, 0x0ED8, 0x02,
	0x000E, 0x0200, 0x02,
	0x000C, 0x0122, 0x02,
	0x0A22, 0x0100, 0x02,
	0x0A24, 0x0000, 0x02,
	0x0804, 0x0000, 0x02,
	0x0A12, 0x0660, 0x02,
	0x0A14, 0x0394, 0x02,
	0x0074, 0x09D5, 0x02,
	0x0076, 0x0000, 0x02,
	0x0A0C, 0x0010, 0x02,
	0x0A1E, 0x0CCF, 0x02,
	0x0A04, 0x016A, 0x02,
	0x0418, 0x0000, 0x02,
	0x0128, 0x0025, 0x02,
	0x012A, 0xFFFF, 0x02,
	0x0120, 0x0041, 0x02,
	0x0122, 0x0371, 0x02,
	0x012C, 0x001E, 0x02,
	0x012E, 0xFFFF, 0x02,
	0x0124, 0x003B, 0x02,
	0x0126, 0x0373, 0x02,
	0x0B02, 0xE04D, 0x02,
	0x0B10, 0x6C21, 0x02,
	0x0B12, 0x0030, 0x02,
	0x0B14, 0x0005, 0x02,
	0x0A0A, 0x38FD, 0x02,
	0x0A1C, 0x0000, 0x02,
	0x0710, 0x03AC, 0x02,
	0x0900, 0x0300, 0x02,
	0x0902, 0xC319, 0x02,
	0x0914, 0xC105, 0x02,
	0x0916, 0x030C, 0x02,
	0x0918, 0x0304, 0x02,
	0x091A, 0x0708, 0x02,
	0x091C, 0x0B04, 0x02,
	0x091E, 0x0600, 0x02,
	0x090C, 0x01EC, 0x02,
	0x090E, 0x000B, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x0253, 0x02,
	0x0F38, 0x059D, 0x02,
	0x0F2A, 0x4924, 0x02,
	0x004C, 0x0100, 0x02,
};

const struct sensor_pll_info_compact sensor_sr846_pllinfo_B_3264x2448_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	680330000,			/* mipi_datarate = OPSYCK */
	287733300,			/* VT pixel clk */
	2523,				/* frame_length_lines */
	3800,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sr846_pllinfo_B_3264x1836_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	680330000,			/* mipi_datarate = OPSYCK */
	287733300,			/* VT pixel clk */
	2523,				/* frame_length_lines */
	3800,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sr846_pllinfo_B_2640x1980_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	680330000,			/* mipi_datarate = OPSYCK */
	287733300,			/* VT pixel clk */
	2523,				/* frame_length_lines */
	3800,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sr846_pllinfo_B_2880x1980_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	680330000,			/* mipi_datarate = OPSYCK */
	287733300,			/* VT pixel clk */
	2523,				/* frame_length_lines */
	3800,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sr846_pllinfo_B_800x600_60fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	172250000,			/* mipi_datarate = OPSYCK */
	287733300,			/* VT pixel clk */
	1261,				/* frame_length_lines */
	3800,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sr846_pllinfo_B_800x600_112fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	340160000,			/* mipi_datarate = OPSYCK */
	287733300,			/* VT pixel clk */
	676,				/* frame_length_lines */
	3800,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sr846_pllinfo_B_1632x1224_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	340160000,			/* mipi_datarate = OPSYCK */
	287733300,			/* VT pixel clk */
	2523,				/* frame_length_lines */
	3800,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sr846_pllinfo_B_1632x916_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	340160000,			/* mipi_datarate = OPSYCK */
	287733300,			/* VT pixel clk */
	2523,				/* frame_length_lines */
	3800,				/* line_length_pck */
};

static const u32 *sensor_sr846_setfiles_B[] = {
	sensor_sr846_setfile_B_3264x2448_30fps,
	sensor_sr846_setfile_B_3264x1836_30fps,
	sensor_sr846_setfile_B_2640x1980_30fps,
	sensor_sr846_setfile_B_2880x1980_30fps,
	sensor_sr846_setfile_B_800x600_60fps,
	sensor_sr846_setfile_B_800x600_112fps,
	sensor_sr846_setfile_B_1632x1224_30fps,
	sensor_sr846_setfile_B_1632x916_30fps,
};

static const u32 sensor_sr846_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_sr846_setfile_B_3264x2448_30fps),
	ARRAY_SIZE(sensor_sr846_setfile_B_3264x1836_30fps),
	ARRAY_SIZE(sensor_sr846_setfile_B_2640x1980_30fps),
	ARRAY_SIZE(sensor_sr846_setfile_B_2880x1980_30fps),
	ARRAY_SIZE(sensor_sr846_setfile_B_800x600_60fps),
	ARRAY_SIZE(sensor_sr846_setfile_B_800x600_112fps),
	ARRAY_SIZE(sensor_sr846_setfile_B_1632x1224_30fps),
	ARRAY_SIZE(sensor_sr846_setfile_B_1632x916_30fps),
};

static const struct sensor_pll_info_compact *sensor_sr846_pllinfos_B[] = {
	&sensor_sr846_pllinfo_B_3264x2448_30fps,
	&sensor_sr846_pllinfo_B_3264x1836_30fps,
	&sensor_sr846_pllinfo_B_2640x1980_30fps,
	&sensor_sr846_pllinfo_B_2880x1980_30fps,
	&sensor_sr846_pllinfo_B_800x600_60fps,
	&sensor_sr846_pllinfo_B_800x600_112fps,
	&sensor_sr846_pllinfo_B_1632x1224_30fps,
	&sensor_sr846_pllinfo_B_1632x916_30fps,
};

const u32 sensor_sr846_otp_initial_B[] = {
	0x2000, 0x0000, 0x02,
	0x2002, 0x00FF, 0x02,
	0x2004, 0x0000, 0x02,
	0x2008, 0x3FFF, 0x02,
	0x23FE, 0xC056, 0x02,
	0x326E, 0x0000, 0x02,
	0x0A00, 0x0000, 0x02,
	0x0E04, 0x0012, 0x02,
	0x0F08, 0x2F04, 0x02,
	0x0F30, 0x001F, 0x02,
	0x0F36, 0x001F, 0x02,
	0x0F04, 0x3A00, 0x02,
	0x0F32, 0x025A, 0x02,
	0x0F38, 0x025A, 0x02,
	0x0F2A, 0x4124, 0x02,
	0x006A, 0x0100, 0x02,
	0x004C, 0x0100, 0x02,
	0x0A00, 0x0100, 0x02,
	I2C_MODE_DELAY, 1000, 0x00, /* Delay 1000us */
};

const u32 sensor_sr846_otp_info_B[] = {
	0x0A02, 0x00, 0x01, /* normal stream off */
	0x0A20, 0x00, 0x01, /* stand by on */
	0x0A00, 0x00, 0x01,
	I2C_MODE_DELAY, 100000, 0x00, /* Delay 100000us */
	0x0F02, 0x00, 0x01, /* pll disable */
	0x071A, 0x01, 0x01, /* CP TRIM_H */
	0x071B, 0x09, 0x01, /* IPGM TRIM_H */
	0x0D04, 0x00, 0x01, /* Fsync (OTP busy) Output Enable */
	0x0D00, 0x07, 0x01, /* Fsync (OTP busy) Output Drivability */
	0x003E, 0x10, 0x01, /* OTP R/W mode */
	0x0A20, 0x01, 0x01,
	0x0A00, 0x01, 0x01, /* stand by off */
	I2C_MODE_DELAY, 1000, 0x00, /* Delay 1000us */
	0x070A, 0x00, 0x01, /* high address */
	0x070B, 0x0C, 0x01, /* low address */
	0x0702, 0x01, 0x01, /* continuous read enable */
};

const u32 sensor_sr846_otp_off_B[] = {
	0x0A20, 0x00, 0x01, /* stand by on */
	0x0A00, 0x00, 0x01,
	I2C_MODE_DELAY, 10000, 0x00, /* Delay 10000us */
	0x003E, 0x00, 0x01, /* display mode */
	0x0A20, 0x01, 0x01,
	0x0A00, 0x01, 0x01, /* stand by off */
	I2C_MODE_DELAY, 1000, 0x00, /* Delay 1000us */
};

#endif
