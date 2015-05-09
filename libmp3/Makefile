# KallistiOS ##version##
#
# libmp3/Makefile
# (c)2001 Dan Potter

OBJS = main.o sndmp3.o

BUILD_TARGET = addons/libmp3
KOS_CFLAGS += -I../xingmp3 -I../include
# KOS_LOCAL_CFLAGS = -I../mpglib

all: $(OBJS)
	cp $(OBJS) ../build/

include $(KOS_BASE)/Makefile.prefab
