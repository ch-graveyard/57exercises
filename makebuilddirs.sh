# Initialises build directories for each problem.
# Usage:
#       ./makebuilddirs.sh

# Create all directories
for D in `find . -type d -name "[0-9]*" -not -path "./.git*"`
do
    mkdir $D/build
done