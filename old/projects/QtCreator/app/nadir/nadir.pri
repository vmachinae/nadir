########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: nadir.pri
#
# Author: $author$
#   Date: 8/25/2021
#
# QtCreator .pri file for nadir executable nadir
########################################################################

########################################################################
# nadir

# nadir_exe TARGET
#
nadir_exe_TARGET = nadir

# nadir_exe INCLUDEPATH
#
nadir_exe_INCLUDEPATH += \
$${nadir_INCLUDEPATH} \

# nadir_exe DEFINES
#
nadir_exe_DEFINES += \
$${nadir_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
VOS_APP_CONSOLE_NADIR_MAIN_INSTANCE \

########################################################################
# nadir_exe OBJECTIVE_HEADERS
#
#nadir_exe_OBJECTIVE_HEADERS += \
#$${NADIR_SRC}/nadir/app/console/nadir/main.hh \

# nadir_exe OBJECTIVE_SOURCES
#
#nadir_exe_OBJECTIVE_SOURCES += \
#$${NADIR_SRC}/nadir/app/console/nadir/main.mm \

########################################################################
# nadir_exe HEADERS
#
nadir_exe_HEADERS += \
$${CRONO_SRC}/vos/logger/level.hpp \
$${CRONO_SRC}/vos/logger/levels.hpp \
$${CRONO_SRC}/vos/logger/function.hpp \
$${CRONO_SRC}/vos/logger/location.hpp \
$${CRONO_SRC}/vos/logger/message.hpp \
$${CRONO_SRC}/vos/logger/implement.hpp \
$${CRONO_SRC}/vos/logger/defines.hpp \
\
$${FILA_SRC}/vos/mt/mutex.hpp \
$${FILA_SRC}/vos/mt/posix/timed.hpp \
$${FILA_SRC}/vos/mt/posix/mutex.hpp \
$${FILA_SRC}/vos/mt/linux/mutex.hpp \
$${FILA_SRC}/vos/mt/apple/osx/mutex.hpp \
$${FILA_SRC}/vos/mt/os/mutex.hpp \
$${FILA_SRC}/vos/mt/os/os.hpp \
\
$${NADIR_SRC}/vos/base/exception.hpp \
$${NADIR_SRC}/vos/base/attached.hpp \
$${NADIR_SRC}/vos/base/created.hpp \
$${NADIR_SRC}/vos/base/locked.hpp \
$${NADIR_SRC}/vos/base/logged.hpp \
$${NADIR_SRC}/vos/base/logger.hpp \
\
$${NADIR_SRC}/vos/console/io.hpp \
$${NADIR_SRC}/vos/console/logger.hpp \
$${NADIR_SRC}/vos/console/main.hpp \
$${NADIR_SRC}/vos/console/main_main.hpp \
$${NADIR_SRC}/vos/console/getopt/main_opt.hpp \
$${NADIR_SRC}/vos/console/getopt/main.hpp \
\
$${NADIR_SRC}/vos/app/console/nadir/main_opt.hpp \
$${NADIR_SRC}/vos/app/console/nadir/main.hpp \

# nadir_exe SOURCES
#
nadir_exe_SOURCES += \
$${CRONO_SRC}/vos/logger/level.cpp \
$${CRONO_SRC}/vos/logger/levels.cpp \
$${CRONO_SRC}/vos/logger/function.cpp \
$${CRONO_SRC}/vos/logger/location.cpp \
$${CRONO_SRC}/vos/logger/message.cpp \
$${CRONO_SRC}/vos/logger/implement.cpp \
$${CRONO_SRC}/vos/logger/defines.cpp \
\
$${FILA_SRC}/vos/mt/posix/timed.cpp \
$${FILA_SRC}/vos/mt/posix/mutex.cpp \
$${FILA_SRC}/vos/mt/os/os.cpp \
\
$${NADIR_SRC}/vos/base/exception.cpp \
$${NADIR_SRC}/vos/base/attached.cpp \
$${NADIR_SRC}/vos/base/created.cpp \
$${NADIR_SRC}/vos/base/locked.cpp \
$${NADIR_SRC}/vos/base/logged.cpp \
$${NADIR_SRC}/vos/base/logger.cpp \
\
$${NADIR_SRC}/vos/console/main_main.cpp \
\
$${NADIR_SRC}/vos/app/console/nadir/main_opt.cpp \
$${NADIR_SRC}/vos/app/console/nadir/main.cpp \

########################################################################
# nadir_exe FRAMEWORKS
#
nadir_exe_FRAMEWORKS += \
$${nadir_FRAMEWORKS} \

# nadir_exe LIBS
#
nadir_exe_LIBS += \
$${nadir_LIBS} \

########################################################################
# NO Qt
QT -= gui core
