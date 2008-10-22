# KallistiOS ##version##
#
# libmp3 Makefile

TARGET = libmp3.a
OBJS =
LIB_OBJS = build/*.o
SUBDIRS = xingmp3 libmp3
LOCAL_CLEAN = build/*.o build/*.a
# SUBDIRS = mpglib libmp3

include $(KOS_BASE)/addons/Makefile.prefab
