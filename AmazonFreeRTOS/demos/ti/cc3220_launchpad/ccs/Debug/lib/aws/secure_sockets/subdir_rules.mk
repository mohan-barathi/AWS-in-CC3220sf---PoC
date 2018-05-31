################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
lib/aws/secure_sockets/aws_secure_sockets.obj: F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/secure_sockets/portable/ti/cc3220_launchpad/aws_secure_sockets.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/third_party/mcu_vendor/ti/SimpleLink_CC32xx/v1_40_01_00/source" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/third_party/mcu_vendor/ti/SimpleLink_CC32xx/v1_40_01_00/source/ti/drivers/net/wifi" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/third_party/mcu_vendor/ti/SimpleLink_CC32xx/v1_40_01_00/kernel/freertos/posix" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/third_party/mcu_vendor/ti/SimpleLink_CC32xx/v1_40_01_00/kernel/freertos/posix/sys" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/include" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/demos/ti/cc3220_launchpad/ccs" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/demos/ti/cc3220_launchpad/common/config_files" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/include" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/include/private" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/demos/ti/cc3220_launchpad/common/application_code/ti_code" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/demos/common/include" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/FreeRTOS/portable/CCS/ARM_CM3" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/third_party/pkcs11" --include_path="F:/OtherTool-Binaries/AWS/CC3220SF/AmazonFreeRTOS/lib/third_party/pkcs11" --define=CC3220sf -g --printf_support=full --diag_suppress=169 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="lib/aws/secure_sockets/aws_secure_sockets.d_raw" --obj_directory="lib/aws/secure_sockets" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


