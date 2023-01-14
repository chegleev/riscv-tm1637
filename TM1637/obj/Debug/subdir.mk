################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/Users/chegleev/Desktop/ch32v307-main/EVT/EXAM/SRC/Debug/debug.c 

OBJS += \
./Debug/debug.o 

C_DEPS += \
./Debug/debug.d 


# Each subdirectory must supply rules for building sources it contributes
Debug/debug.o: /Users/chegleev/Desktop/ch32v307-main/EVT/EXAM/SRC/Debug/debug.c Debug/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU RISC-V Cross C Compiler'
	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized -g -I"/Users/chegleev/Desktop/ch32v307-main/EVT/EXAM/SRC/Debug" -I"/Users/chegleev/Desktop/ch32v307-main/EVT/EXAM/SRC/Core" -I"/Users/chegleev/Desktop/ch32v307-main/EVT/EXAM/GPIO/TM1637/User" -I"/Users/chegleev/Desktop/ch32v307-main/EVT/EXAM/SRC/Peripheral/inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


