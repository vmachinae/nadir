///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
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
///   File: time.hpp
///
/// Author: $author$
///   Date: 1/26/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_OS_TIME_HPP
#define VOS_OS_TIME_HPP

#include "vos/os/os.hpp"

#if defined(WINDOWS)  
#include "vos/os/microsoft/windows/time.hpp"
#elif defined(APPLEOSX)  
#include "vos/os/apple/osx/time.hpp"
#elif defined(APPLEIOS)  
#include "vos/os/apple/ios/time.hpp"
#elif defined(SOLARIS)  
#include "vos/os/oracle/solaris/time.hpp"
#elif defined(MACH)  
#include "vos/os/mach/time.hpp"
#elif defined(LINUX)  
#include "vos/os/linux/time.hpp"
#else /// defined(LINUX)  
#include "vos/os/posix/time.hpp"
#endif /// defined(LINUX) 

namespace vos {
namespace os {

/// clock_gettime
inline int clock_gettime(clockid_t clk_id, struct timespec *res) {
    return vos::os::os::clock_gettime(clk_id, res);
}

/// gettimeofday
inline int gettimeofday(struct timeval* tv, void* p) {
    return vos::os::os::gettimeofday(tv, p);
}

} /// namespace os
} /// namespace vos

#endif /// VOS_OS_TIME_HPP
