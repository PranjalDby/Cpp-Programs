#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc,char* argv[],char* envp[]){
    cout << argv[1] << endl;
    if(argv[1] == "--help"s){
        cout << "commands:\n"
             << "  The following built-in and plugins subcommands are available.\n\n"
             << "  COMMAND\n"
             << "    activate          Activate a conda environment.\n"
             << "    clean             Remove unused packages and caches.\n"
             << "    compare           Compare packages between conda environments.\n"
             << "    config            Modify configuration values in .condarc.\n"
             << "    content-trust     Signing and verification tools for Conda\n"
             << "    create            Create a new conda environment from a list of specified packages.\n"
             << "    deactivate        Deactivate the current active conda environment.\n"
             << "    doctor            Display a health report for your environment.\n"
             << "    info              Display information about current conda install.\n"
             << "    init              Initialize conda for shell interaction.\n"
             << "    install           Install a list of packages into a specified conda environment.\n"
             << "    list              List installed packages in a conda environment.\n"
             << "    notices           Retrieve latest channel notifications.\n"
             << "    package           Create low-level conda packages. (EXPERIMENTAL)\n"
             << "    remove (uninstall) Remove a list of packages from a specified conda environment.\n"
             << "    rename            Rename an existing environment.\n"
             << "    repoquery         Advanced search for repodata.\n"
             << "    run               Run an executable in a conda environment.\n"
             << "    search            Search for packages and display associated information using the MatchSpec format.\n"
             << "    update (upgrade)  Update conda packages to the latest compatible version." << endl;
    }

    // #include <cstring>

    // bool numberLines = false;
    // if((argc == 2) && _stricmp(argv[1], "/n") == 0){
    //     numberLines = true;
    // }
    // // Walk through the list of strings until a Null is encountered
    // for(int i = 0;envp[i] != NULL;++i){
    //     if(numberLines){
    //         cout << i <<": ";
    //     }
    //     cout << envp[i] << "\n";
    // }

    // getting variables set in the user's environment

    // if (argv[1] == "COMPUTERNAME")
    //     cout << "User's Environment variables = \n" 
    //         << getenv("COMPUTERNAME");

    int count;

    cout << "\nCommand-line arguments:\n";
    for(count = 0;count < argc;count++){
        cout << " argv[" << count << "]  "
            <<argv[count] << "\n";
    }

}