# STM32F103RB Bootloader

## Overview

This project implements a **simple custom bootloader** for the **STM32F103RB** microcontroller on the **STM32 Nucleo-F103RB** development board.

The bootloader is developed using **libopencm3** on **Ubuntu Linux**. After reset, the bootloader initializes the system and transfers execution to the user application stored at a different Flash memory location.

This project was implemented by following the bootloader tutorial series by **LowByteProductions**.

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

---
## Video

Watch the full video. [🎥 Video](https://github.com/user-attachments/assets/54fc14a5-6183-47e0-9a7a-f529a35130f1)
<p align="center">
  <img src="media/MPU6050.gif" width="700">
</p>

---

