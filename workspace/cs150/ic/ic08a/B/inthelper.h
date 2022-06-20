/**
 * CS 150 exception exercises.
 * @author Steve Gilbert
 * @version Spring 2018
 * @file "inthelper.h"
 */
#ifndef INTHELPER_H
#define INTHELPER_H

#include <string>
#include <stdexcept>

int parseInt(const std::string& s);
int readInt(const std::string& prompt="");

#endif