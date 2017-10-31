style"roxicons"{
stock["rox-select"] = {{ @"edit-select-invert" }}
stock["rox-show-details"] = {{ @"rox-show-details" }}
stock["rox-show-hidden"] = {{ @"rox-show-hidden" }}
stock["rox-symlink"] = {{ @"emblem-symbolic-link" }}
stock["rox-xattr"] = {{ @"emblem-generic" }}
stock["symlink"] = {{ @"emblem-symbolic-link" }}
stock["dirs"] = {{ @"folder" }}
stock["rox-mount"] = {{ @"emblem-none" }}
stock["rox-mounted"] = {{ @"emblem-mountpoint-mounted" }}
}class "*" style "roxicons"

style"wnckicons"{
stock["wnck-stock-minimize"] = {{ @"wnck-stock-minimize" }}
stock["wnck-stock-maximize"] = {{ @"wnck-stock-maximize" }}
stock["wnck-stock-delete"] = {{ @"wnck-stock-delete" }}
}class "*" style "wnckicons"

style"gimpicons"{
#for f in $(find -name 'gimp-*' -not -name '*-symbolic.svg*'); do printf "stock[\x22$(echo $f|sed 's/.svg//g;s|./||g')\x22] = {{ @\x22"$(echo $f|sed 's/.svg//g;s|./||g')"\x22 }}\n" >>$HOME/Desktop/gimpicons;done
stock["gimp-wilber-outline"] = {{ @"gimp-wilber-outline" }}
stock["gimp-prefs-display"] = {{ @"gimp-prefs-display" }}
stock["gimp-tool-flip"] = {{ @"gimp-tool-flip" }}
stock["gimp-web"] = {{ @"gimp-web" }}
stock["gimp-prefs-default-comment"] = {{ @"gimp-prefs-default-comment" }}
stock["gimp-tool-ellipse-select"] = {{ @"gimp-tool-ellipse-select" }}
stock["gimp-prefs-folders-plug-ins"] = {{ @"gimp-prefs-folders-plug-ins" }}
stock["gimp-edit"] = {{ @"gimp-edit" }}
stock["gimp-tool-handle-transform"] = {{ @"gimp-tool-handle-transform" }}
stock["gimp-selection-shrink"] = {{ @"gimp-selection-shrink" }}
stock["gimp-tool-options"] = {{ @"gimp-tool-options" }}
stock["gimp-menu-left"] = {{ @"gimp-menu-left" }}
stock["gimp-layers"] = {{ @"gimp-layers" }}
stock["gimp-tool-color-picker"] = {{ @"gimp-tool-color-picker" }}
stock["gimp-prefs-image-windows-snapping"] = {{ @"gimp-prefs-image-windows-snapping" }}
stock["gimp-tool-path"] = {{ @"gimp-tool-path" }}
stock["gimp-shape-diamond"] = {{ @"gimp-shape-diamond" }}
stock["gimp-color-picker-white"] = {{ @"gimp-color-picker-white" }}
stock["gimp-input-device"] = {{ @"gimp-input-device" }}
stock["gimp-tool-seamless-clone"] = {{ @"gimp-tool-seamless-clone" }}
stock["gimp-wilber"] = {{ @"gimp-wilber" }}
stock["gimp-tool-clone"] = {{ @"gimp-tool-clone" }}
stock["gimp-template"] = {{ @"gimp-template" }}
stock["gimp-tool-colorize"] = {{ @"gimp-tool-colorize" }}
stock["gimp-tool-fuzzy-select"] = {{ @"gimp-tool-fuzzy-select" }}
stock["gimp-tool-desaturate"] = {{ @"gimp-tool-desaturate" }}
stock["gimp-reset"] = {{ @"gimp-reset" }}
stock["gimp-vcenter"] = {{ @"gimp-vcenter" }}
stock["gimp-controller-keyboard"] = {{ @"gimp-controller-keyboard" }}
stock["gimp-tool-free-select"] = {{ @"gimp-tool-free-select" }}
stock["gimp-flip-vertical"] = {{ @"gimp-flip-vertical" }}
stock["gimp-tool-move"] = {{ @"gimp-tool-move" }}
stock["gimp-image"] = {{ @"gimp-image" }}
stock["gimp-cap-butt"] = {{ @"gimp-cap-butt" }}
stock["gimp-prefs-default-grid"] = {{ @"gimp-prefs-default-grid" }}
stock["gimp-prefs-help-system"] = {{ @"gimp-prefs-help-system" }}
stock["gimp-warning"] = {{ @"gimp-warning" }}
stock["gimp-controller-linux-input"] = {{ @"gimp-controller-linux-input" }}
stock["gimp-close"] = {{ @"gimp-close" }}
stock["gimp-tool-crop"] = {{ @"gimp-tool-crop" }}
stock["gimp-tool-posterize"] = {{ @"gimp-tool-posterize" }}
stock["gimp-menu-right"] = {{ @"gimp-menu-right" }}
stock["gimp-rotate-90"] = {{ @"gimp-rotate-90" }}
stock["gimp-tool-shear"] = {{ @"gimp-tool-shear" }}
stock["gimp-cap-square"] = {{ @"gimp-cap-square" }}
stock["gimp-tool-iscissors"] = {{ @"gimp-tool-iscissors" }}
stock["gimp-tool-curves"] = {{ @"gimp-tool-curves" }}
stock["gimp-prefs-input-devices"] = {{ @"gimp-prefs-input-devices" }}
stock["gimp-prefs-window-management"] = {{ @"gimp-prefs-window-management" }}
stock["gimp-tool-blend"] = {{ @"gimp-tool-blend" }}
stock["gimp-plugin"] = {{ @"gimp-plugin" }}
stock["gimp-tool-airbrush"] = {{ @"gimp-tool-airbrush" }}
stock["gimp-tools"] = {{ @"gimp-tools" }}
stock["gimp-anchor"] = {{ @"gimp-anchor" }}
stock["gimp-symmetry"] = {{ @"gimp-symmetry" }}
stock["gimp-tool-scale"] = {{ @"gimp-tool-scale" }}
stock["gimp-hcenter"] = {{ @"gimp-hcenter" }}
stock["gimp-undo-history"] = {{ @"gimp-undo-history" }}
stock["gimp-prefs-controllers"] = {{ @"gimp-prefs-controllers" }}
stock["gimp-close-all"] = {{ @"gimp-close-all" }}
stock["gimp-video"] = {{ @"gimp-video" }}
stock["gimp-prefs-folders-themes"] = {{ @"gimp-prefs-folders-themes" }}
stock["gimp-rotate-180"] = {{ @"gimp-rotate-180" }}
stock["gimp-prefs-folders-tools"] = {{ @"gimp-prefs-folders-tools" }}
stock["gimp-prefs-folders-scripts"] = {{ @"gimp-prefs-folders-scripts" }}
stock["gimp-text-dir-ltr"] = {{ @"gimp-text-dir-ltr" }}
stock["gimp-tool-brightness-contrast"] = {{ @"gimp-tool-brightness-contrast" }}
stock["gimp-selection"] = {{ @"gimp-selection" }}
stock["gimp-business-card"] = {{ @"gimp-business-card" }}
stock["gimp-gegl"] = {{ @"gimp-gegl" }}
stock["gimp-display"] = {{ @"gimp-display" }}
stock["gimp-prefs-folders-mypaint-brushes"] = {{ @"gimp-prefs-folders-mypaint-brushes" }}
stock["gimp-paste-into"] = {{ @"gimp-paste-into" }}
stock["gimp-join-round"] = {{ @"gimp-join-round" }}
stock["gimp-move-to-screen"] = {{ @"gimp-move-to-screen" }}
stock["gimp-default-colors"] = {{ @"gimp-default-colors" }}
stock["gimp-device-status"] = {{ @"gimp-device-status" }}
stock["gimp-prefs-system-resources"] = {{ @"gimp-prefs-system-resources" }}
stock["gimp-tool-blur"] = {{ @"gimp-tool-blur" }}
stock["gimp-file-manager"] = {{ @"gimp-file-manager" }}
stock["gimp-question"] = {{ @"gimp-question" }}
stock["gimp-prefs-theme"] = {{ @"gimp-prefs-theme" }}
stock["gimp-selection-grow"] = {{ @"gimp-selection-grow" }}
stock["gimp-char-picker"] = {{ @"gimp-char-picker" }}
stock["gimp-grid"] = {{ @"gimp-grid" }}
stock["gimp-tool-dodge"] = {{ @"gimp-tool-dodge" }}
stock["gimp-controller-wheel"] = {{ @"gimp-controller-wheel" }}
stock["gimp-shape-circle"] = {{ @"gimp-shape-circle" }}
stock["gimp-flip-horizontal"] = {{ @"gimp-flip-horizontal" }}
stock["gimp-tool-rotate"] = {{ @"gimp-tool-rotate" }}
stock["gimp-color-picker-black"] = {{ @"gimp-color-picker-black" }}
stock["gimp-tool-perspective"] = {{ @"gimp-tool-perspective" }}
stock["gimp-invert"] = {{ @"gimp-invert" }}
stock["gimp-tool-pencil"] = {{ @"gimp-tool-pencil" }}
stock["gimp-shape-square"] = {{ @"gimp-shape-square" }}
stock["gimp-image-open"] = {{ @"gimp-image-open" }}
stock["gimp-tool-hue-saturation"] = {{ @"gimp-tool-hue-saturation" }}
stock["gimp-tool-align"] = {{ @"gimp-tool-align" }}
stock["gimp-transparency"] = {{ @"gimp-transparency" }}
stock["gimp-zoom-follow-window"] = {{ @"gimp-zoom-follow-window" }}
stock["gimp-pattern"] = {{ @"gimp-pattern" }}
stock["gimp-error"] = {{ @"gimp-error" }}
stock["gimp-join-bevel"] = {{ @"gimp-join-bevel" }}
stock["gimp-tool-ink"] = {{ @"gimp-tool-ink" }}
stock["gimp-tool-zoom"] = {{ @"gimp-tool-zoom" }}
stock["gimp-prefs-icon-theme"] = {{ @"gimp-prefs-icon-theme" }}
stock["gimp-tool-bucket-fill"] = {{ @"gimp-tool-bucket-fill" }}
stock["gimp-user-manual"] = {{ @"gimp-user-manual" }}
stock["gimp-color-picker-gray"] = {{ @"gimp-color-picker-gray" }}
stock["gimp-tool-color-balance"] = {{ @"gimp-tool-color-balance" }}
stock["gimp-prefs-color-management"] = {{ @"gimp-prefs-color-management" }}
stock["gimp-rotate-270"] = {{ @"gimp-rotate-270" }}
stock["gimp-tool-rect-select"] = {{ @"gimp-tool-rect-select" }}
stock["gimp-join-miter"] = {{ @"gimp-join-miter" }}
stock["gimp-tool-smudge"] = {{ @"gimp-tool-smudge" }}
stock["gimp-wilber-eek"] = {{ @"gimp-wilber-eek" }}
stock["gimp-tool-paintbrush"] = {{ @"gimp-tool-paintbrush" }}
stock["gimp-tool-by-color-select"] = {{ @"gimp-tool-by-color-select" }}
stock["gimp-tool-foreground-select"] = {{ @"gimp-tool-foreground-select" }}
stock["gimp-tool-mypaint-brush"] = {{ @"gimp-tool-mypaint-brush" }}
stock["gimp-info"] = {{ @"gimp-info" }}
stock["gimp-prefs-folders-fonts"] = {{ @"gimp-prefs-folders-fonts" }}
stock["gimp-prefs-folders-gradients"] = {{ @"gimp-prefs-folders-gradients" }}
stock["gimp-tool-heal"] = {{ @"gimp-tool-heal" }}
stock["gimp-tool-text"] = {{ @"gimp-tool-text" }}
stock["gimp-list"] = {{ @"gimp-list" }}
stock["gimp-text-dir-rtl"] = {{ @"gimp-text-dir-rtl" }}
stock["gimp-cap-round"] = {{ @"gimp-cap-round" }}
stock["gimp-tool-measure"] = {{ @"gimp-tool-measure" }}
stock["gimp-cursor"] = {{ @"gimp-cursor" }}
stock["gimp-visible"] = {{ @"gimp-visible" }}
stock["gimp-duplicate"] = {{ @"gimp-duplicate" }}
stock["gimp-smartphone"] = {{ @"gimp-smartphone" }}
stock["gimp-swap-colors"] = {{ @"gimp-swap-colors" }}
stock["gimp-tool-perspective-clone"] = {{ @"gimp-tool-perspective-clone" }}
stock["gimp-clipboard"] = {{ @"gimp-clipboard" }}
stock["gimp-tool-warp"] = {{ @"gimp-tool-warp" }}
stock["gimp-color-pick-from-screen"] = {{ @"gimp-color-pick-from-screen" }}
stock["gimp-tool-eraser"] = {{ @"gimp-tool-eraser" }}
stock["gimp-tool-cage"] = {{ @"gimp-tool-cage" }}
stock["gimp-prefs-folders-icon-themes"] = {{ @"gimp-prefs-folders-icon-themes" }}
stock["gimp-paste-as-new"] = {{ @"gimp-paste-as-new" }}
stock["gimp-selection-all"] = {{ @"gimp-selection-all" }}
stock["gimp-prefs-session"] = {{ @"gimp-prefs-session" }}
}class "*" style "gimpicons"
