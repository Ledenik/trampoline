# Makefile automatically generated by goil
# Do not modify directly this file, it can be overwritten by goil
# Instead, you can update 'Make-rules' that is included by the Makefile.
#

# make          : build trampoline
# make doc      : extract both dev and user docs from trmpoline sources 
#                 (doxygen and dot required).
# make clean    : remove obj files (but no dep files)
# make mrproper : remove objs, dep files, and $(EXEC)
# 
# NOTE: dependancies are set by default. To turn off dependancies generation, 
#       use the NODEP symbol, i.e. : make clean NODEP=1
#

# Trampoline root path to source code.
# it should be declared as TRAMPOLINE_BASE_PATH in the OS section of the .oil file.
TPL_BASE_PATH = $TRAMPOLINE_BASE_PATH$

# name of the generated executable
# it should be declared as APP_NAME in the OS section of the .oil file.
EXEC    =  $APP_NAME$


OIL_FILE = $OIL_FILE$

#sources of the application.
# it should be declared as APP_SRC in the OS section of the .oil file (many times allowed).
SOURCES  = $APP_SRC$

# Trampoline generation flags
$FLAGS$

#CFLAGS: flags used for the compilation process
# it should be declared as CFLAGS in the OS section of the .oil file (many times allowed).
CFLAGS   = $CFLAGS$
# it should be declared as LDFLAGS in the OS section of the .oil file (many times allowed).
#LDLAGS: flags used for the link process
# it should be declared as CFLAGS in the OS section of the .oil file (many times allowed).
LDFLAGS  = $LDFLAGS$
ifeq ($(strip $(WITH_MEMMAP)),true)
LDFLAGS += -T $(basename $(OIL_FILE))/$SCRIPT_FILE$ -Wl,-Map,$(basename $(OIL_FILE)).map
endif
#ASFLAGS: flags used for the assembly process (if required)
# it should be declared as AS_FLAGS in the OS section of the .oil file (many times allowed).
ASFLAGS  = $ASFLAGS$

#default build directory
BUILD_DIR = build

# Autosar extension
# If 'true', Autosar extension are compiled in (schedule tables, ...)
AUTOSAR = $AUTOSAR_ON$

# Interrupt vector generation
GENITVEC = $GENITVEC$

# if there is an interrupt generation, the oil file depends on target.cfg
OIL_FILE_DEP = $OIL_FILE_DEP$

$MAKEFILE_SPEC$

#Application specific rules
include Make-rules

#call main Trampoline Makefile
OS_MAKE_PATH = $(TPL_BASE_PATH)/make
include $(OS_MAKE_PATH)/Makefile

# vim:ft=make
