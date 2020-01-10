INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = AOG

AOG_FILES = Tweak.x
AOG_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
