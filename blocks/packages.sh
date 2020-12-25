#!/bin/sh

packagesCount="$(pacman -Qu | wc -l)"

if [[ packagesCount -gt 0 ]]; then
  printf "  $packagesCount"
fi
