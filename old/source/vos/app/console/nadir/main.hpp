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
///   File: main.hpp
///
/// Author: $author$
///   Date: 12/3/2019
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_NADIR_MAIN_HPP
#define VOS_APP_CONSOLE_NADIR_MAIN_HPP

#include "vos/app/console/nadir/main_opt.hpp"
#include "vos/lib/nadir/version.hpp"

namespace vos {
namespace app {
namespace console {
namespace nadir {

/// class maint
template 
<class TExtends = main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy): extends(copy) {
    }

protected:
    /// ...run
    virtual int run(int argc, char_t** argv, char_t** env) {
        ::vos::lib::version::string_t string;
        const ::vos::lib::version& version = ::vos::lib::nadir::version::which();
        const ::vos::lib::version::char_t *chars = 0, *name = 0;
        int err = 0;
        if ((chars = version.to_chars(string)) && (name = version.name())) {
            this->outlln(name, " version = " , chars, "\n", null);
        } 
        err = this->usage(argc, argv, env);
        return err;
    }
}; /// class maint
typedef maint<> main;

} /// namespace nadir
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_NADIR_MAIN_HPP
