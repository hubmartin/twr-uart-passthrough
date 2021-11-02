<a href="https://www.hardwario.com/"><img src="https://www.hardwario.com/ci/assets/hw-logo.svg" width="200" alt="HARDWARIO Logo" align="right"></a>

# Firmware Skeleton for HARDWARIO TOWER Core Module

[![build](https://github.com/hardwario/twr-uart-passthrough/actions/workflows/main.yml/badge.svg)](https://github.com/hardwario/twr-uart-passthrough/actions/workflows/main.yml)
[![Release](https://img.shields.io/github/release/hardwario/twr-uart-passthrough.svg)](https://github.com/hardwario/twr-uart-passthrough/releases)
[![License](https://img.shields.io/github/license/hardwario/twr-uart-passthrough.svg)](https://github.com/hardwario/twr-uart-passthrough/blob/master/LICENSE)
[![Twitter](https://img.shields.io/twitter/follow/hardwario_en.svg?style=social&label=Follow)](https://twitter.com/hardwario_en)

This firmware allows you to use Core Module as a simple UART passthrough device. It could be used to connect to the LoRa Module and reconfigure MuRata uart to correct speed (from 19200 baud to 9600 baud).

More info here https://github.com/hardwario/twr-lora-tester#troubleshooting-lora-module-and-err-status

This repository contains firmware for [Core Module](https://shop.hardwario.com/core-module).

If you want to get more information about Core Module, firmware and how to work with it, please follow this link:

**https://tower.hardwario.com/en/latest/firmware/basic-overview**

User's application code (business logic) goes into `src/application.c`.
The default content works as a *Hello World* example.
When flashed into Core Module, it toggles LED state with each button press.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT/) - see the [LICENSE](LICENSE) file for details.

---

Made with &#x2764;&nbsp; by [**HARDWARIO s.r.o.**](https://www.hardwario.com/) in the heart of Europe.
