#!/bin/sh

packagesString="$(pacman -Qu | wc -l)"
printf "  $packagesString"
