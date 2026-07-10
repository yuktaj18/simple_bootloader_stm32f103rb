# STM32F103RB Bootloader

## Overview

This project implements a **simple custom bootloader** for the **STM32F103RB** microcontroller on the **STM32 Nucleo-F103RB** development board.

The bootloader is developed using **libopencm3** on **Ubuntu Linux**, providing a lightweight, open-source alternative to STM32 HAL libraries. After reset, the bootloader initializes the system and transfers execution to the user application stored at a different Flash memory location.

This project was implemented by following the bootloader tutorial series by **LowByteProductions**.

---

## Features

* Custom STM32 bootloader
* Developed using **libopencm3**
* Bare-metal programming (no HAL)
* Executes from Flash memory
* Transfers control to the user application
* Correct vector table relocation
* Stack Pointer (MSP) initialization
* Jump to application reset handler

---

## Hardware

* STM32 Nucleo-F103RB
* USB ST-Link Programmer (on-board)

---

## Software Requirements

* Ubuntu Linux
* GCC ARM Embedded Toolchain
* libopencm3
* OpenOCD
* GNU Make

