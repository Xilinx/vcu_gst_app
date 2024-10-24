/*********************************************************************
 * Copyright (C) 2017-2022 Xilinx, Inc.
 * Copyright (C) 2022-2024 Advanced Micro Devices, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 ********************************************************************/

#ifndef INCLUDE_VCU_GST_APP_H_
#define INCLUDE_VCU_GST_APP_H_

#include <math.h>
#include <string.h>
#include <vgst_lib.h>
#include <video.h>
#include <vlib_audio.h>
#include <perfapm.h>
#include <stdlib.h>
#include <stdio.h>

#define DEFAULT_GOP_LEN       60
#define DEFAULT_B_FRAME       0
#define LOW_BITRATE           10000
#define MEDIUM_BITRATE        30000
#define HIGH_BITRATE          60000

#define DEFAULT_DISPLAY_RATE  60
#define DEFAULT_NUM_SLICE     8
#define DEFAULT_PORT_NUM      5004
#define BYTE_TO_GBIT          (8 / 1000000000.0)
#define BIT_TO_MBIT(value)    (value/1000000.0)
#define BIT_TO_KBIT(value)    (value/1000.0)
#define MAX_NUM_SOURCES       8
#define MIN_NUM_SOURCES       1
#define MAX_WIDTH             3840
#define MAX_HEIGHT            2160
#define MIN_RECORD_DUR        1
#define MAX_RECORD_DUR        3
#define DEFAULT_INFO_INTERVAL 1
#define DEFAULT_RELATIVE_QP   -21

typedef struct _App {
  FILE *file;
  gchar line[512];
  GMainLoop *loop;
  gboolean fps_info, apm_info, pipeline_info, update_bitrate[MAX_NUM_SOURCES], loop_playback;
  guint fps[2];
  gint64 position;
  guint loop_interval;
  vgst_enc_params encParam[MAX_NUM_SOURCES];
  vgst_ip_params  ipParam [MAX_NUM_SOURCES];
  vgst_op_params  opParam [MAX_NUM_SOURCES];
  vgst_cmn_params cmnParam;
  vgst_aud_params audParam[MAX_NUM_SOURCES];
}App;

#endif /* INCLUDE_VCU_GST_APP_H_ */
