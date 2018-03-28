// Copyright 2018 Silicon Laboratories, Inc.
//
//

/********************************************************************
 * Autogenerated file, do not edit.
 *******************************************************************/

#include <stdint.h>
#include "bg_gattdb_def.h"

#ifdef __GNUC__
#define GATT_HEADER(F) F __attribute__ ((section (".gatt_header"))) 
#define GATT_DATA(F) F __attribute__ ((section (".gatt_data"))) 
#else
#ifdef __ICCARM__
#define GATT_HEADER(F) _Pragma("location=\".gatt_header\"") F 
#define GATT_DATA(F) _Pragma("location=\".gatt_data\"") F 
#else
#define GATT_HEADER(F) F 
#define GATT_DATA(F) F 
#endif
#endif

GATT_DATA(const uint16_t bg_gattdb_data_uuidtable_16_map [])=
{
    0x2800,
    0x2801,
    0x2803,
    0x1800,
    0x2a00,
    0x2a01,
    0x180a,
    0x2a29,
    0x2a24,
    0x2a27,
    0x2a26,
    0x180f,
    0x2a19,
    0x2904,
    0x2902,
    0x1801,
    0x2a05,
};

GATT_DATA(const uint8_t bg_gattdb_data_uuidtable_128_map [])=
{
0xde, 0x74, 0x2d, 0xf0, 0x70, 0x13, 0x12, 0xb5, 0x44, 0x4b, 0xb1, 0xc5, 0x20, 0xff, 0x95, 0xa4, 
0x11, 0x96, 0x49, 0xb6, 0xb6, 0x56, 0x22, 0xae, 0xe6, 0x11, 0x11, 0x86, 0xee, 0x6a, 0xfd, 0xd8, 
0x12, 0x96, 0x49, 0xb6, 0xb6, 0x56, 0x22, 0xae, 0xe6, 0x11, 0x11, 0x86, 0xee, 0x6a, 0xfd, 0xd8, 
0x13, 0x96, 0x49, 0xb6, 0xb6, 0x56, 0x22, 0xae, 0xe6, 0x11, 0x11, 0x86, 0xee, 0x6a, 0xfd, 0xd8, 
0x14, 0x96, 0x49, 0xb6, 0xb6, 0x56, 0x22, 0xae, 0xe6, 0x11, 0x11, 0x86, 0xee, 0x6a, 0xfd, 0xd8, 
0xdf, 0x74, 0x2d, 0xf0, 0x70, 0x13, 0x12, 0xb5, 0x44, 0x4b, 0xb1, 0xc5, 0x21, 0xff, 0x95, 0x04, 
0xff, 0x74, 0x2d, 0xf0, 0x70, 0x13, 0x12, 0xb5, 0x44, 0x4b, 0xb1, 0xc5, 0x21, 0xff, 0x95, 0xa4, 
0xf0, 0x19, 0x21, 0xb4, 0x47, 0x8f, 0xa4, 0xbf, 0xa1, 0x4f, 0x63, 0xfd, 0xee, 0xd6, 0x14, 0x1d, 
0x63, 0x60, 0x32, 0xe0, 0x37, 0x5e, 0xa4, 0x88, 0x53, 0x4e, 0x6d, 0xfb, 0x64, 0x35, 0xbf, 0xf7, 
};




GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_38 ) = {
	.properties=0x08,
	.index=12,
	.max_len=0,
	.data=NULL,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_37 ) = {
	.len=19,
	.data={0x08,0x27,0x00,0x63,0x60,0x32,0xe0,0x37,0x5e,0xa4,0x88,0x53,0x4e,0x6d,0xfb,0x64,0x35,0xbf,0xf7,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_36 ) = {
	.len=16,
	.data={0xf0,0x19,0x21,0xb4,0x47,0x8f,0xa4,0xbf,0xa1,0x4f,0x63,0xfd,0xee,0xd6,0x14,0x1d,}
};
uint8_t bg_gattdb_data_attribute_field_35_data[1]={0x00,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_35 ) = {
	.properties=0x08,
	.index=11,
	.max_len=1,
	.data=bg_gattdb_data_attribute_field_35_data,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_34 ) = {
	.len=19,
	.data={0x08,0x24,0x00,0xff,0x74,0x2d,0xf0,0x70,0x13,0x12,0xb5,0x44,0x4b,0xb1,0xc5,0x21,0xff,0x95,0xa4,}
};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_33 ) = {
	.properties=0x08,
	.index=10,
	.max_len=0,
	.data=NULL,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_32 ) = {
	.len=19,
	.data={0x08,0x22,0x00,0xdf,0x74,0x2d,0xf0,0x70,0x13,0x12,0xb5,0x44,0x4b,0xb1,0xc5,0x21,0xff,0x95,0x04,}
};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_31 ) = {
	.properties=0x02,
	.index=9,
	.max_len=0,
	.data=NULL,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_30 ) = {
	.len=19,
	.data={0x02,0x20,0x00,0x14,0x96,0x49,0xb6,0xb6,0x56,0x22,0xae,0xe6,0x11,0x11,0x86,0xee,0x6a,0xfd,0xd8,}
};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_29 ) = {
	.properties=0x0a,
	.index=8,
	.max_len=0,
	.data=NULL,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_28 ) = {
	.len=19,
	.data={0x0a,0x1e,0x00,0x13,0x96,0x49,0xb6,0xb6,0x56,0x22,0xae,0xe6,0x11,0x11,0x86,0xee,0x6a,0xfd,0xd8,}
};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_27 ) = {
	.properties=0x02,
	.index=7,
	.max_len=0,
	.data=NULL,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_26 ) = {
	.len=19,
	.data={0x02,0x1c,0x00,0x12,0x96,0x49,0xb6,0xb6,0x56,0x22,0xae,0xe6,0x11,0x11,0x86,0xee,0x6a,0xfd,0xd8,}
};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_25 ) = {
	.properties=0x02,
	.index=6,
	.max_len=0,
	.data=NULL,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_24 ) = {
	.len=19,
	.data={0x02,0x1a,0x00,0x11,0x96,0x49,0xb6,0xb6,0x56,0x22,0xae,0xe6,0x11,0x11,0x86,0xee,0x6a,0xfd,0xd8,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_23 ) = {
	.len=16,
	.data={0xde,0x74,0x2d,0xf0,0x70,0x13,0x12,0xb5,0x44,0x4b,0xb1,0xc5,0x20,0xff,0x95,0xa4,}
};
uint8_t bg_gattdb_data_attribute_field_21_data[7]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_21 ) = {
	.properties=0x02,
	.index=5,
	.max_len=7,
	.data=bg_gattdb_data_attribute_field_21_data,
};

uint8_t bg_gattdb_data_attribute_field_20_data[1]={0x00,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_20 ) = {
	.properties=0x02,
	.index=4,
	.max_len=1,
	.data=bg_gattdb_data_attribute_field_20_data,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_19 ) = {
	.len=5,
	.data={0x02,0x15,0x00,0x19,0x2a,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_18 ) = {
	.len=2,
	.data={0x0f,0x18,}
};
uint8_t bg_gattdb_data_attribute_field_17_data[5]={0x31,0x2e,0x31,0x2e,0x30,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_17 ) = {
	.properties=0x02,
	.index=3,
	.max_len=5,
	.data=bg_gattdb_data_attribute_field_17_data,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_16 ) = {
	.len=5,
	.data={0x02,0x12,0x00,0x26,0x2a,}
};
uint8_t bg_gattdb_data_attribute_field_15_data[5]={0x31,0x2e,0x30,0x2e,0x30,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_15 ) = {
	.properties=0x02,
	.index=2,
	.max_len=5,
	.data=bg_gattdb_data_attribute_field_15_data,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_14 ) = {
	.len=5,
	.data={0x02,0x10,0x00,0x27,0x2a,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_13 ) = {
	.len=7,
	.data={0x43,0x68,0x69,0x72,0x70,0x56,0x33,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_12 ) = {
	.len=5,
	.data={0x02,0x0e,0x00,0x24,0x2a,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_11 ) = {
	.len=12,
	.data={0x43,0x61,0x74,0x6e,0x69,0x70,0x20,0x45,0x6c,0x65,0x63,0x74,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_10 ) = {
	.len=5,
	.data={0x02,0x0c,0x00,0x29,0x2a,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_9 ) = {
	.len=2,
	.data={0x0a,0x18,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_8 ) = {
	.len=2,
	.data={0x00,0x00,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_7 ) = {
	.len=5,
	.data={0x02,0x09,0x00,0x01,0x2a,}
};
uint8_t bg_gattdb_data_attribute_field_6_data[29]={0x43,0x68,0x69,0x72,0x70,0x20,0x73,0x6f,0x69,0x6c,0x20,0x6d,0x6f,0x69,0x73,0x74,0x75,0x72,0x65,0x20,0x73,0x65,0x6e,0x73,0x6f,0x72,0x20,0x76,0x33,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_6 ) = {
	.properties=0x0a,
	.index=1,
	.max_len=29,
	.data=bg_gattdb_data_attribute_field_6_data,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_5 ) = {
	.len=5,
	.data={0x0a,0x07,0x00,0x00,0x2a,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_4 ) = {
	.len=2,
	.data={0x00,0x18,}
};
uint8_t bg_gattdb_data_attribute_field_2_data[4]={0x00,0x00,0x00,0x00,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_data_attribute_field_2 ) = {
	.properties=0x20,
	.index=0,
	.max_len=4,
	.data=bg_gattdb_data_attribute_field_2_data,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_1 ) = {
	.len=5,
	.data={0x20,0x03,0x00,0x05,0x2a,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_data_attribute_field_0 ) = {
	.len=2,
	.data={0x01,0x18,}
};
GATT_DATA(const struct bg_gattdb_attribute bg_gattdb_data_attributes_map[])={
    {.uuid=0x0000,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_0},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_1},
    {.uuid=0x0010,.permissions=0x800,.caps=0xffff,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_2},
    {.uuid=0x000e,.permissions=0x807,.caps=0xffff,.datatype=0x03,.min_key_size=0x00,.configdata={.flags=0x02,.index=0x00,.clientconfig_index=0x00}},
    {.uuid=0x0000,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_4},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_5},
    {.uuid=0x0004,.permissions=0x803,.caps=0xffff,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_6},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_7},
    {.uuid=0x0005,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_8},
    {.uuid=0x0000,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_9},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_10},
    {.uuid=0x0007,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_11},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_12},
    {.uuid=0x0008,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_13},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_14},
    {.uuid=0x0009,.permissions=0x801,.caps=0xffff,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_15},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_16},
    {.uuid=0x000a,.permissions=0x801,.caps=0xffff,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_17},
    {.uuid=0x0000,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_18},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_19},
    {.uuid=0x000c,.permissions=0x801,.caps=0xffff,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_20},
    {.uuid=0x000d,.permissions=0x801,.caps=0xffff,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_21},
    {.uuid=0x000e,.permissions=0x807,.caps=0xffff,.datatype=0x03,.min_key_size=0x00,.configdata={.flags=0x00,.index=0x05,.clientconfig_index=0x01}},
    {.uuid=0x0000,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_23},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_24},
    {.uuid=0x8001,.permissions=0x801,.caps=0xffff,.datatype=0x07,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_25},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_26},
    {.uuid=0x8002,.permissions=0x801,.caps=0xffff,.datatype=0x07,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_27},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_28},
    {.uuid=0x8003,.permissions=0x803,.caps=0xffff,.datatype=0x07,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_29},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_30},
    {.uuid=0x8004,.permissions=0x801,.caps=0xffff,.datatype=0x07,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_31},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_32},
    {.uuid=0x8005,.permissions=0x802,.caps=0xffff,.datatype=0x07,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_33},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_34},
    {.uuid=0x8006,.permissions=0x802,.caps=0xffff,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_35},
    {.uuid=0x0000,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_36},
    {.uuid=0x0002,.permissions=0x801,.caps=0xffff,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_data_attribute_field_37},
    {.uuid=0x8008,.permissions=0x802,.caps=0xffff,.datatype=0x07,.min_key_size=0x00,.dynamicdata=&bg_gattdb_data_attribute_field_38},
};

GATT_DATA(const uint16_t bg_gattdb_data_attributes_dynamic_mapping_map[])={
	0x0003,
	0x0007,
	0x0010,
	0x0012,
	0x0015,
	0x0016,
	0x001a,
	0x001c,
	0x001e,
	0x0020,
	0x0022,
	0x0024,
	0x0027,
};

GATT_DATA(const uint8_t bg_gattdb_data_adv_uuid16_map[])={0x0};
GATT_DATA(const uint8_t bg_gattdb_data_adv_uuid128_map[])={0x0};
GATT_HEADER(const struct bg_gattdb_def bg_gattdb_data)={
    .attributes=bg_gattdb_data_attributes_map,
    .attributes_max=39,
    .uuidtable_16_size=17,
    .uuidtable_16=bg_gattdb_data_uuidtable_16_map,
    .uuidtable_128_size=9,
    .uuidtable_128=bg_gattdb_data_uuidtable_128_map,
    .attributes_dynamic_max=13,
    .attributes_dynamic_mapping=bg_gattdb_data_attributes_dynamic_mapping_map,
    .adv_uuid16=bg_gattdb_data_adv_uuid16_map,
    .adv_uuid16_num=0,
    .adv_uuid128=bg_gattdb_data_adv_uuid128_map,
    .adv_uuid128_num=0,
    .caps_mask=0xffff,
    .enabled_caps=0xffff,
};

const struct bg_gattdb_def *bg_gattdb=&bg_gattdb_data;