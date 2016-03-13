/* xlreg_cpp/src/main.cpp */

#include <getopt.h>
#include <iostream>

#include "xlreg_cpp.h"

int main(int argc, char *argv[])
{
    int c;
    
    static int justShow=0, showVersion=0, verbose=0;
    const struct option long_options[] = {
        {"justShow",    no_argument,  &justShow,    1},
        {"showVersion", no_argument,  &showVersion, 1},
        {"verbose",     no_argument,  &verbose,     1},
        {NULL,0,NULL,0}         /* end of list */
    };
    

    int option_index = 0;

    while ((c = getopt_long(argc, argv, "jVv", long_options, &option_index)) != -1) {
        
        switch(c) {
        case 'h':
            // DEBUG
            std::cout << "-h seen" << std::endl;
            // END
            /* display usage message */
            break;
        case 'j':
            // DEBUG
            std::cout << "-j seen" << std::endl;
            // END
            justShow = 1;
            break;
        case 'V':
            // DEBUG
            std::cout << "-V (UC) seen" << std::endl;
            // END
            showVersion = 1;
            break;
        case 'v':
            // DEBUG
            std::cout << "-v (LC) seen" << std::endl;
            // END
            verbose = 1;
            break;
        }

    }

    if (showVersion) {
        std::cout << "xlRegCppClient  " 
            <<  VERSION << " " 
            << VERSION_DATE << std::endl;
        return(0);
     }


     // do other stuff
     //
}
