#!/bin/sh

# Sync mirrors to check for updates
sudo pacman -Sy >/dev/null

packagesCount="$(pacman -Qu | wc -l)"

if [[ packagesCount -gt 0 ]]; then
  printf "  $packagesCount"
fi
