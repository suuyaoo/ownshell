/* Copyright (C) 2015 Legrand
   All rights reserved

   Shell library - command implementation */

#include "shell_cmd.h"

ShellCmd::ShellCmd(ShellEnv* env, std::string name, std::string description)
{
    this->env = env;
    this->name = name;
    this->description = description;
}

ShellCmd::~ShellCmd()
{

}
