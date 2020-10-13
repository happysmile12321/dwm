#!/usr/bin/env bash
#place to save clipoard image
image_save_place=/home/zhen/Desktop/Pictures
if [[ ! -e ${image_save_place} ]]; then
		mkdir $image_save_place
fi
deepin-screen-recorder -s ${image_save_place}
ls -rt ${image_save_place}/* | tail -1  | xargs -i xclip -selection clipoard -t "image/png" {}
