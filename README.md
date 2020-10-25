# BlackPill

Registering DFU, in /etc/udev/rules.d/dfu.rules:

    ATTRS{idVendor}=="0483", ATTRS{idProduct}=="df11", MODE="664", GROUP="plugdev"

And then reload the rule:

    sudo udevadm control --reload-rules
