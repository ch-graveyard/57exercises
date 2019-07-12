# Initialises a new directory and empty source code file for a new problem.
# Usage:
#       ./initproblem.sh [number] [short name] [long name]
#
# [number]: problem number with leading zero
# [short name]: short lowercase one word name for directory
# [long name]: long name for comment
#
# Example:
#       ./initproblem.sh 01 hello "Saying Hello"

# Create directory
mkdir $1$2

# Create empty source file
echo \/\* Problem $1: $3 \*\/ > $1$2/$2.c
