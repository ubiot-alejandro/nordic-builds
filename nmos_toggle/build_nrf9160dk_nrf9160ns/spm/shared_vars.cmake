set(spm_KERNEL_HEX_NAME zephyr.hex)
set(spm_ZEPHYR_BINARY_DIR /home/alejandro/nrf/ncs/nrf/nmos_toggle/build_nrf9160dk_nrf9160ns/spm/zephyr)
set(spm_KERNEL_ELF_NAME zephyr.elf)
list(APPEND spm_BUILD_BYPRODUCTS /home/alejandro/nrf/ncs/nrf/nmos_toggle/build_nrf9160dk_nrf9160ns/spm/zephyr/zephyr.hex)
list(APPEND spm_BUILD_BYPRODUCTS /home/alejandro/nrf/ncs/nrf/nmos_toggle/build_nrf9160dk_nrf9160ns/spm/zephyr/zephyr.elf)
list(APPEND spm_BUILD_BYPRODUCTS
    /home/alejandro/nrf/ncs/nrf/nmos_toggle/build_nrf9160dk_nrf9160ns/spm/libspmsecureentries.a)
