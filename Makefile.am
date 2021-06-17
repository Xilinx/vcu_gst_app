
bin_PROGRAMS = vcu_gst_app

AM_DEFAULT_SOURCE_EXT = .c

vcu_gst_app_INC_DIR = ./include
vcu_gst_app_SRC_DIR = ./src

#NOTE: In some build system, single $ character is not interpreted correctly and removed, so we have added $$ to overcome such issue.
VCU_GST_APP_CFLAGS_PKG_CONFIG = $$(pkg-config --cflags  vcu-gst-lib vcu-apm-lib)
VCU_GST_APP_LIBS_PKG_CONFIG = $$(pkg-config --libs vcu-gst-lib vcu-apm-lib)

nodist_vcu_gst_app_SOURCES = \
		$(vcu_gst_app_INC_DIR)/configs.h \
		$(vcu_gst_app_INC_DIR)/vcu_gst_app.h

vcu_gst_app_SOURCES = \
		$(vcu_gst_app_SRC_DIR)/vcu_gst_app.c

vcu_gst_app_CFLAGS = $(VCU_GST_APP_CFLAGS_PKG_CONFIG) -I$(vcu_gst_app_INC_DIR)
vcu_gst_app_LDFLAGS =  $(VCU_GST_APP_LIBS_PKG_CONFIG)
