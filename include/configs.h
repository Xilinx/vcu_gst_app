/*********************************************************************
 * Copyright (C) 2017-2022 Xilinx, Inc.
 * Copyright (C) 2022-2023 Advanced Micro Devices, Inc.
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

#ifndef INCLUDE_CONFIGS_H_
#define INCLUDE_CONFIGS_H_

/* Common configurations */
#define CMN_CONFIG           "Common Configuration"
#define NUM_SRC              "Num Of Input"
#define OUTPUT               "Output"
#define DP_OUT               "DP"
#define HDMI_OUT             "HDMI"
#define HDMI_TX_OUT          "HDMI_Tx"
#define SDI_OUT              "SDI"
#define SDI_TX_OUT           "SDI_Tx"
#define I2S_OUT              "I2S"
#define I2S_TX_OUT           "I2S_Tx"
#define OUTPUT_TYPE          "Out Type"
#define RECORD_FILE_OUT      "Record"
#define STREAM_OUT           "Stream"
#define DISPLAY_OUT          "Display"
#define SPLIT_SCREEN_OUT     "Split_Screen"
#define FRAME_RATE           "Frame Rate"
#define TRUE_VAL             "TRUE"
#define FALSE_VAL            "FALSE"

/* Input configurations */
#define INPUT_CONFIG         "Input Configuration"
#define INPUT_NUM            "Input Num"
#define ACCELERATOR_FILTER   "Accelerator Filter"
#define ENABLE_SCD           "Enable SCD"
#define ENABLE_ROI           "Enable Roi"
#define ENABLE_LLP2          "Enable LLP2"
#define INPUT_TYPE           "Input Type"
#define TPG_INPUT            "TPG"
#define HDMI_INPUT           "HDMI"
#define HDMI_RX_INPUT        "HDMI_Rx"
#define HDMI_2_INPUT         "HDMI_2"
#define HDMI_RX_2_INPUT      "HDMI_Rx_2"
#define HDMI_3_INPUT         "HDMI_3"
#define HDMI_RX_3_INPUT      "HDMI_Rx_3"
#define HDMI_4_INPUT         "HDMI_4"
#define HDMI_RX_4_INPUT      "HDMI_Rx_4"
#define HDMI_5_INPUT         "HDMI_5"
#define HDMI_RX_5_INPUT      "HDMI_Rx_5"
#define HDMI_6_INPUT         "HDMI_6"
#define HDMI_RX_6_INPUT      "HDMI_Rx_6"
#define HDMI_7_INPUT         "HDMI_7"
#define HDMI_RX_7_INPUT      "HDMI_Rx_7"
#define MIPI_INPUT           "MIPI"
#define CSI_INPUT            "CSI"
#define CSI_2_INPUT          "CSI_2"
#define CSI_3_INPUT          "CSI_3"
#define CSI_4_INPUT          "CSI_4"
#define MIPI_CSI_INPUT       "MIPI_CSI"
#define SDI_INPUT            "SDI"
#define SDI_RX_INPUT         "SDI_Rx"
#define I2S_INPUT            "I2S"
#define I2S_RX_INPUT         "I2S_Rx"
#define FILE_INPUT           "File"
#define STREAMING_INPUT      "Stream"
#define NV12_FORMAT          "NV12"
#define NV16_FORMAT          "NV16"
#define XV15_FORMAT          "XV15"
#define XV20_FORMAT          "XV20"
#define YU24_FORMAT          "YU24"  /* YUV444 8-bit  */
#define X403_FORMAT          "X403"  /* YUV444 10-bit */

#define URI                  "Uri"
#define FORMAT               "Format"
#define RAW                  "Raw"
#define WIDTH                "Width"
#define RELATIVE_QP          "Relative QP"
#define HEIGHT               "Height"

/* Encoder configurations */
#define ENCODER_CONFIG       "Encoder Configuration"
#define ENCODER_NUM          "Encoder Num"
#define PRESET               "Preset"
#define HEVC_HIGH            "HEVC_High"
#define HEVC_MEDIUM          "HEVC_Medium"
#define HEVC_LOW             "HEVC_Low"
#define AVC_HIGH             "AVC_High"
#define AVC_MEDIUM           "AVC_Medium"
#define AVC_LOW              "AVC_Low"
#define CUSTOM               "Custom"

#define ENCODER_NAME         "Encoder Name"
#define H264_ENC_NAME        "H264"
#define AVC_ENC_NAME         "AVC"
#define H265_ENC_NAME        "H265"
#define HEVC_ENC_NAME        "HEVC"


#define PROFILE              "Profile"
#define BASE_PROF            "Baseline"
#define MAIN_PROF            "Main"
#define HIGH_PROF            "High"

#define QP_VALUE             "QP"
#define UNIFORM_QP           "Uniform"
#define AUTO_QP              "Auto"
#define ROI_QP               "Roi"

#define RATE_CONTRL          "Rate Control"
#define CBR_RC               "CBR"
#define VBR_RC               "VBR"
#define LOWLATENCY_RC        "Low_Latency"

#define BITRATE              "Bitrate"
#define LATENCY_MODE         "Latency Mode"
#define NORMAL               "Normal"
#define SUB_FRAME            "Sub_Frame"

#define FILLER_DATA          "Filler Data"
#define LOW_BANDWIDTH        "Low Bandwidth"
#define HLG_SDR_COMPATIBLE   "HLG_SDR_Compatible"
#define GOP_MODE             "Gop Mode"
#define BASIC_GOP            "Basic"
#define LOW_DELAY_P_GOP      "Low_Delay_P"
#define LOW_DELAY_B_GOP      "Low_Delay_B"

#define B_FRAMES             "B Frames"
#define SLICE                "Slice"
#define GOP_LENGTH           "GoP Length"
#define L2_CACHE             "L2 Cache"
#define GDR_MODE             "GDR Mode"
#define HORIZONTAL_GDR_MODE  "Horizontal"
#define VERTICAL_GDR_MODE    "Vertical"
#define DISABLED_GDR_MODE    "Disabled"

#define ENTROPY_MODE         "Entropy Mode"
#define CAVLC_ENTROPY_MODE   "CAVLC"
#define CABAC_ENTROPY_MODE   "CABAC"
#define DEFAULT_ENTROPY_MODE "Default"
#define MAX_PICTURE_SIZE     "Max Picture Size"

/* Record configurations */
#define RECORD_CONFIG        "Record Configuration"
#define RECORD_NUM           "Record Num"
#define OUT_FILE_NAME        "Out File Name"
#define DURATION             "Duration"    // value will be in minute

/* Streaming configurations */
#define STREAMING_CONFIG     "Streaming Configuration"
#define STREAMING_NUM        "Streaming Num"
#define HOST_IP              "Host IP"
#define PORT                 "Port"

/* Audio configurations */
#define AUDIO_CONFIG         "Audio Configuration"
#define AUDIO_NUM            "Audio Num"
#define AUDIO_ENABLE         "Audio Enable"
#define AUDIO_FORMAT         "Audio Format"
#define SAMPLING_RATE        "Sampling Rate"
#define NUM_CHANNEL          "Num Of Channel"
#define VOLUME               "Volume"
#define SOURCE               "Source"
#define RENDERER             "Renderer"


/* Streaming configurations */
#define TRACE_CONFIG         "Trace Configuration"
#define FPS_INFO             "FPS Info"
#define APM_INFO             "APM Info"
#define PIPELINE_INFO        "Pipeline Info"
#define LOOP_PLAYBACK        "Loop Playback"
#define LOOP_INTERVAL        "Loop Interval"

#define EXIT                 "Exit"

#endif /* INCLUDE_CONFIGS_H_ */
