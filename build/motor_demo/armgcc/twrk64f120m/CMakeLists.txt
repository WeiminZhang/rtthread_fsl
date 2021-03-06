INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Os")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Os")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK64FN1M0VMD12")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DTWR_K64F120M")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DEMPL_TARGET_KINETIS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DMPU6050")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DEMPL")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSE_DMP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Os")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK64FN1M0VMD12")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DTWR_K64F120M")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DEMPL_TARGET_KINETIS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DMPU6050")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DEMPL")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSE_DMP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__ram_vector_table__=1")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wl,--start-group")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lnosys")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lm")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lc")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lgcc")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wl,--end-group")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lm")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Os")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__ram_vector_table__=1")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wl,--start-group")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lnosys")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lm")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lc")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lgcc")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wl,--end-group")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lm")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Os")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/common/sgtl5000)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/common/phyksz8041)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/system/src/clock/MK64F12)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/driver/eMPL)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/driver/include)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/mllite)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/mpl)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/eMPL-hal)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/motor_app)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/drivers/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/hal/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/rtos)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/osa/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/CMSIS/Include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/system/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src)

include_directories(${ProjDirPath}/../../../../components/drivers/include/drivers)

include_directories(${ProjDirPath}/../../../../components/drivers/include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/inc)

include_directories(${ProjDirPath}/../../../../components/finsh)

include_directories(${ProjDirPath}/../../../../include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/common/sgtl5000)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/common/phyksz8041)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/system/src/clock/MK64F12)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/driver/eMPL)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/driver/include)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/mllite)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/mpl)

include_directories(${ProjDirPath}/../../../../utils/mdp/core/eMPL-hal)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/motor_app)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/drivers/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/hal/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/rtos)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/osa/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/CMSIS/Include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/system/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src)

include_directories(${ProjDirPath}/../../../../components/drivers/include/drivers)

include_directories(${ProjDirPath}/../../../../components/drivers/include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/inc)

include_directories(${ProjDirPath}/../../../../components/finsh)

include_directories(${ProjDirPath}/../../../../include)

add_executable(motor_demo.elf 
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/gcc/startup_MK64F12.S"
"${ProjDirPath}/../../../../libcpu/arm/cortex-m4/context_gcc.S"
"${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/uart/drv_uart.c"
"${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/inc/drv_uart.h"
"${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/uart/fsl_uart_irq_rt.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/rtconfig.h"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/fsl_gpio_irq.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/eMPL/inv_mpu.c"
"${ProjDirPath}/../../../../utils/mdp/core/driver/eMPL/inv_mpu_dmp_motion_driver.c"
"${ProjDirPath}/../../../../utils/mdp/core/driver/eMPL/inv_mpu.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/eMPL/inv_mpu_dmp_motion_driver.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/eMPL/dmpKey.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/eMPL/dmpmap.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/include/mltypes.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/include/log.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/include/mlinclude.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/include/mlmath.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/include/mlos.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/include/mpu.h"
"${ProjDirPath}/../../../../utils/mdp/core/driver/include/stdint_invensense.h"
"${ProjDirPath}/../../../../utils/mdp/core/eMPL-hal/eMPL_outputs.c"
"${ProjDirPath}/../../../../utils/mdp/core/eMPL-hal/eMPL_outputs.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/hal_outputs.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/data_builder.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/data_builder.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/hal_outputs.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/invensense.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/message_layer.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/message_layer.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/ml_math_func.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/ml_math_func.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/mlmath.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/mpl.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/mpl.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/results_holder.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/results_holder.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/start_manager.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/start_manager.h"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/storage_manager.c"
"${ProjDirPath}/../../../../utils/mdp/core/mllite/storage_manager.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/gyro_tc.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/fast_no_motion.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/compass_vec_cal.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/mag_disturb.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/motion_no_motion.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/no_gyro_fusion.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/quaternion_supervisor.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/accel_auto_cal.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/fusion_9axis.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/heading_from_gyro.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/inv_math.h"
"${ProjDirPath}/../../../../utils/mdp/core/mpl/invensense_adv.h"
"${ProjDirPath}/../../../../utils/mdp/core/eMPL-hal/eMPL_outputs.c"
"${ProjDirPath}/../../../../utils/mdp/core/eMPL-hal/eMPL_outputs.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../components/drivers/src/completion.c"
"${ProjDirPath}/../../../../components/drivers/src/pipe.c"
"${ProjDirPath}/../../../../components/drivers/src/portal.c"
"${ProjDirPath}/../../../../components/drivers/src/ringbuffer.c"
"${ProjDirPath}/../../../../components/drivers/src/workqueue.c"
"${ProjDirPath}/../../../../components/drivers/src/dataqueue.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../components/finsh/cmd.c"
"${ProjDirPath}/../../../../components/finsh/finsh.h"
"${ProjDirPath}/../../../../components/finsh/finsh_compiler.c"
"${ProjDirPath}/../../../../components/finsh/finsh_error.c"
"${ProjDirPath}/../../../../components/finsh/finsh_error.h"
"${ProjDirPath}/../../../../components/finsh/finsh_heap.c"
"${ProjDirPath}/../../../../components/finsh/finsh_heap.h"
"${ProjDirPath}/../../../../components/finsh/finsh_init.c"
"${ProjDirPath}/../../../../components/finsh/finsh_node.c"
"${ProjDirPath}/../../../../components/finsh/finsh_node.h"
"${ProjDirPath}/../../../../components/finsh/finsh_ops.c"
"${ProjDirPath}/../../../../components/finsh/finsh_ops.h"
"${ProjDirPath}/../../../../components/finsh/finsh_parser.c"
"${ProjDirPath}/../../../../components/finsh/finsh_parser.h"
"${ProjDirPath}/../../../../components/finsh/finsh_token.c"
"${ProjDirPath}/../../../../components/finsh/finsh_token.h"
"${ProjDirPath}/../../../../components/finsh/finsh_var.c"
"${ProjDirPath}/../../../../components/finsh/finsh_var.h"
"${ProjDirPath}/../../../../components/finsh/finsh_vm.c"
"${ProjDirPath}/../../../../components/finsh/finsh_vm.h"
"${ProjDirPath}/../../../../components/finsh/msh.c"
"${ProjDirPath}/../../../../components/finsh/msh.h"
"${ProjDirPath}/../../../../components/finsh/msh_cmd.c"
"${ProjDirPath}/../../../../components/finsh/shell.c"
"${ProjDirPath}/../../../../components/finsh/shell.h"
"${ProjDirPath}/../../../../components/finsh/symbol.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../components/drivers/serial/serial.c"
"${ProjDirPath}/../../../../components/drivers/include/drivers/serial.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../src/clock.c"
"${ProjDirPath}/../../../../src/device.c"
"${ProjDirPath}/../../../../src/idle.c"
"${ProjDirPath}/../../../../src/ipc.c"
"${ProjDirPath}/../../../../src/irq.c"
"${ProjDirPath}/../../../../src/kservice.c"
"${ProjDirPath}/../../../../src/mem.c"
"${ProjDirPath}/../../../../src/memheap.c"
"${ProjDirPath}/../../../../src/mempool.c"
"${ProjDirPath}/../../../../src/module.c"
"${ProjDirPath}/../../../../src/object.c"
"${ProjDirPath}/../../../../src/scheduler.c"
"${ProjDirPath}/../../../../src/slab.c"
"${ProjDirPath}/../../../../src/thread.c"
"${ProjDirPath}/../../../../src/timer.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src/fsl_debug_console.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/inc/fsl_debug_console.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src/print_scan.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src/print_scan.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src/fsl_misc_utilities.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/application.c"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/mpu6050_function.c"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/mpu6050.c"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/mpu6050.h"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/packet.h"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/log_kinetis.c"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/startup_app.c"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/board_app.c"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/board_app.h"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/app_config.h"
"${ProjDirPath}/../../../../bsp/kinetis/motor_app/app_config.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../libcpu/arm/cortex-m4/cpuport.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
"${ProjDirPath}/../../../../libcpu/arm/common/backtrace.c"
"${ProjDirPath}/../../../../libcpu/arm/common/div0.c"
"${ProjDirPath}/../../../../libcpu/arm/common/showmem.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/startup/system_MK64F12.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/twrk64f120m/pin_mux.h"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/linker/gcc/MK64FN1M0xxx12_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MK64F12/linker/gcc/MK64FN1M0xxx12_flash.ld -static")

TARGET_LINK_LIBRARIES(motor_demo.elf -Wl,--start-group)
target_link_libraries(motor_demo.elf debug nosys)

target_link_libraries(motor_demo.elf debug m)

target_link_libraries(motor_demo.elf debug c)

target_link_libraries(motor_demo.elf debug gcc)

target_link_libraries(motor_demo.elf optimized nosys)

target_link_libraries(motor_demo.elf optimized m)

target_link_libraries(motor_demo.elf optimized c)

target_link_libraries(motor_demo.elf optimized gcc)

link_directories(${ProjDirPath}/../../../../utils/mdp/core/mpl/arm/gcc4.9.3/liblibmplmpu_m4_hardfp)

target_link_libraries(motor_demo.elf debug ${ProjDirPath}/../../../../utils/mdp/core/mpl/arm/gcc4.9.3/liblibmplmpu_m4_hardfp/liblibmplmpu.a)

link_directories(${ProjDirPath}/../../../../utils/mdp/core/mpl/arm/gcc4.9.3/liblibmplmpu_m4_hardfp)

target_link_libraries(motor_demo.elf optimized ${ProjDirPath}/../../../../utils/mdp/core/mpl/arm/gcc4.9.3/liblibmplmpu_m4_hardfp/liblibmplmpu.a)

TARGET_LINK_LIBRARIES(motor_demo.elf -Wl,--end-group)

# BIN AND HEX
ADD_CUSTOM_COMMAND(TARGET motor_demo.elf POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Oihex ${EXECUTABLE_OUTPUT_PATH}/motor_demo.elf ${EXECUTABLE_OUTPUT_PATH}/motor_demo.hex)
ADD_CUSTOM_COMMAND(TARGET motor_demo.elf POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Obinary ${EXECUTABLE_OUTPUT_PATH}/motor_demo.elf ${EXECUTABLE_OUTPUT_PATH}/motor_demo.bin)
