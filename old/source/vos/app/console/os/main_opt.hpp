///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2019 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 12/26/2019
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_OS_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_OS_MAIN_OPT_HPP

#include "vos/console/getopt/main.hpp"

#define VOS_APP_CONSOLE_OS_MAIN_OS_OPT "os"
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C "w" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S "windows" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C "x" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S "osx" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C "l" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S "linux" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C "p" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S "posix" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C "m" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S "mach" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C "s" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S "solaris" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C "o" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S "os" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C "n" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S "none" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG \
    "{ " "(" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C ")" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C ")" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C ")" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C ")" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C ")" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C ")" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C ")" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C ")" VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S \
    " }" 
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTUSE ""
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_S "o:"
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C 'o'
#define VOS_APP_CONSOLE_OS_MAIN_OS_OPTION \
   {VOS_APP_CONSOLE_OS_MAIN_OS_OPT, \
    VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPT "to-os"
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_WINDOWS_C "w" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_WINDOWS_S "windows" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_MACOSX_C "x" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_MACOSX_S "osx" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_LINUX_C "l" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_LINUX_S "linux" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_POSIX_C "p" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_POSIX_S "posix" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_MACH_C "m" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_MACH_S "mach" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_SOLARIS_C "s" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_SOLARIS_S "solaris" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_OS_C "o" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_OS_S "os" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_NONE_C "n" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_NONE_S "none" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG \
    "{ " "(" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_WINDOWS_C ")" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_WINDOWS_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_MACOSX_C ")" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_MACOSX_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_LINUX_C ")" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_LINUX_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_POSIX_C ")" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_POSIX_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_MACH_C ")" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_MACH_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_SOLARIS_C ")" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_SOLARIS_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_OS_C ")" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_OS_S \
    " | " "(" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_NONE_C ")" VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_NONE_S \
    " }" 
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTUSE ""
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTVAL_S "2:"
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTVAL_C '2'
#define VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTION \
   {VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPT, \
    VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS \
   VOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_S \
   VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTVAL_S \
   VOS_CONSOLE_MAIN_OPTIONS_CHARS

#define VOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS \
   VOS_APP_CONSOLE_OS_MAIN_OS_OPTION \
   VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTION \
   VOS_CONSOLE_MAIN_OPTIONS_OPTIONS

#define VOS_APP_CONSOLE_OS_MAIN_ARGS 0
#define VOS_APP_CONSOLE_OS_MAIN_ARGV

namespace vos {
namespace app {
namespace console {
namespace os {

/// class main_optt
template <class TExtends = vos::console::getopt::main, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy): extends(copy) {
    }

protected:
    /// on_os_option
    virtual int on_os_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C)) 
                || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S))) {
                err = on_windows_option
                (optval, optarg, optname, optind, argc, argv, env);
            } else {
                if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C)) 
                    || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S))) {
                    err = on_osx_option
                    (optval, optarg, optname, optind, argc, argv, env);
                } else {
                    if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C)) 
                        || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S))) {
                        err = on_linux_option
                        (optval, optarg, optname, optind, argc, argv, env);
                    } else {
                        if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C)) 
                            || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S))) {
                            err = on_posix_option
                            (optval, optarg, optname, optind, argc, argv, env);
                        } else {
                            if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C)) 
                                || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S))) {
                                err = on_mach_option
                                (optval, optarg, optname, optind, argc, argv, env);
                            } else {
                                if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C)) 
                                    || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S))) {
                                    err = on_solaris_option
                                    (optval, optarg, optname, optind, argc, argv, env);
                                } else {
                                    if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C)) 
                                        || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S))) {
                                        err = on_osos_option
                                        (optval, optarg, optname, optind, argc, argv, env);
                                    } else {
                                        if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C)) 
                                            || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S))) {
                                            err = on_osnone_option
                                            (optval, optarg, optname, optind, argc, argv, env);
                                        } else {
                                            err = extends::on_invalid_option_arg
                                            (optval, optarg, optname, optind, argc, argv, env);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }
    virtual int on_windows_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_osx_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_linux_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_posix_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_mach_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_solaris_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_osos_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_osnone_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }

    /// on_to_os_option
    virtual int on_to_os_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C)) 
                || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S))) {
                err = on_to_windows_option
                (optval, optarg, optname, optind, argc, argv, env);
            } else {
                if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C)) 
                    || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S))) {
                    err = on_to_osx_option
                    (optval, optarg, optname, optind, argc, argv, env);
                } else {
                    if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C)) 
                        || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S))) {
                        err = on_to_linux_option
                        (optval, optarg, optname, optind, argc, argv, env);
                    } else {
                        if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C)) 
                            || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S))) {
                            err = on_to_posix_option
                            (optval, optarg, optname, optind, argc, argv, env);
                        } else {
                            if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C)) 
                                || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S))) {
                                err = on_to_mach_option
                                (optval, optarg, optname, optind, argc, argv, env);
                            } else {
                                if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C)) 
                                    || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S))) {
                                    err = on_to_solaris_option
                                    (optval, optarg, optname, optind, argc, argv, env);
                                } else {
                                    if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C)) 
                                        || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S))) {
                                        err = on_to_osos_option
                                        (optval, optarg, optname, optind, argc, argv, env);
                                    } else {
                                        if ((!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C)) 
                                            || (!arg.compare(VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S))) {
                                            err = on_to_osnone_option
                                            (optval, optarg, optname, optind, argc, argv, env);
                                        } else {
                                            err = extends::on_invalid_option_arg
                                            (optval, optarg, optname, optind, argc, argv, env);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }
    virtual int on_to_windows_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_to_osx_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_to_linux_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_to_posix_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_to_mach_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_to_solaris_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_to_osos_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_to_osnone_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C:
            err = on_os_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTVAL_C:
            err = on_to_os_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option
            (optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage
    (const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case VOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_OS_MAIN_OS_OPTARG;
            chars = VOS_APP_CONSOLE_OS_MAIN_OS_OPTUSE;
            break;
        case VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTVAL_C:
            optarg = VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTARG;
            chars = VOS_APP_CONSOLE_OS_MAIN_TO_OS_OPTUSE;
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        int err = 0;
        static const char_t* chars = VOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = VOS_APP_CONSOLE_OS_MAIN_ARGS;
        static const char_t* _argv[] = {
            VOS_APP_CONSOLE_OS_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace os
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_OS_MAIN_OPT_HPP
