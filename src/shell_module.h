/* Copyright (C) 2015 the ownShell authors and contributors
 * <see AUTHORS file>
 *
 * This module is part of ownShell and is released under
 * the MIT License: http://www.opensource.org/licenses/mit-license.php
*/

#ifndef _SHELL_LIB_I_MODULE_H
#define _SHELL_LIB_I_MODULE_H

#include <string>
#include <list>
#include "shell_env.h"
#include "shell_component.h"

using namespace std;

/**
 *
 * A ShellModule is a composite (includes ShellComponents)
 */

class ShellModule: public ShellComponent
{
    public:
        ShellModule(ShellEnv* env, string name, string description) : ShellComponent(env, name, description){};
        virtual ~ShellModule() {};

        virtual string run(char** argv, int argc);
        virtual string getHelp();

        virtual void add(ShellComponent * component);
        virtual void remove(ShellComponent * component);
        unsigned int getComponentsNb(void);

    private:
        list<ShellComponent* > components;
        virtual ShellComponent* findComponent(ShellComponent * component);
};

#endif
