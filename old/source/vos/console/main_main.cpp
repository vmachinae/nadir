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
///   File: main_main.cpp
///
/// Author: $author$
///   Date: 12/3/2019
///////////////////////////////////////////////////////////////////////
#include "vos/mt/os/mutex.hpp"
#include "vos/console/main_main.hpp"
#include "vos/console/logger.cpp"
#include "vos/console/io.cpp"

namespace vos {
namespace console {

} /// namespace console
} /// namespace vos

/// function main
int main(int argc, char** argv, char** env) {
    int err = 0;

    try {
        LOGGING_LEVELS levels = DEFAULT_LOGGING_LEVELS;
        ::vos::console::logger logger(levels);

        try {
            bool mutex_is_logged = true;
            ::vos::mt::os::mutex mutex(mutex_is_logged);

            mutex.set_is_logged(false);
            GET_LOGGING_LEVEL(levels);
            try {
                ::vos::console::logger logger(mutex, levels);
    
                LOGGER_LOG_DEBUG("try {...");
                try {
                    LOGGER_LOG_DEBUG("::vos::console::main::the_main(argc, argv, env)...");
                    err = ::vos::console::main::the_main(argc, argv, env);
                    SET_LOGGING_LEVEL(levels);
                    LOGGER_LOG_DEBUG("..." << err << " = ::vos::console::main::the_main(argc, argv, env)");
                } catch (const ::vos::exception& e) {
                    SET_LOGGING_LEVEL(levels);
                    LOGGER_LOG_ERROR("...catch (const ::vos::exception& e = \"" << e.status_to_chars() << "\")");
                    err = 1;
                } catch (...) {
                    SET_LOGGING_LEVEL(levels);
                    LOGGER_LOG_ERROR("...catch (...)");
                    err = 1;
                }
                LOGGER_LOG_DEBUG("...} try");
            } catch (const ::vos::exception& e) {
                err = 1;
            } catch (...) {
                err = 1;
            }
            mutex.set_is_logged(mutex_is_logged);
        } catch (const ::vos::exception& e) {
            ::vos::console::logger logger;
            LOGGER_LOG_ERROR("...catch (const ::vos::exception& e = \"" << e.status_to_chars() << "\")");
            err = 1;
        } catch (...) {
            ::vos::console::logger logger;
            LOGGER_LOG_ERROR("...catch (...)");
            err = 1;
        }
    } catch (const ::vos::exception& e) {
        err = 1;
    } catch (...) {
        err = 1;
    }
    return err;
} /// function main
