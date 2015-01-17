# Onkyo Console

An application for low-level exploration of the Onkyo eISCP protocol.

Uses CocoaPods to install [OnkyoKit](https://github.com/jhh/onkyokit),
see the [CocoaPods Getting Started guide](http://guides.cocoapods.org/using/getting-started.html).

### Browse for a reciever

Upon starting, Onkyo Console will display any discovered receivers. Highlight the
desired receiver and click the OK button.

![Receiver Browser](/../screenshots/browser.png?raw=true "Receiver Browser")

### Usage example

Onkyo Console will send the selected receiver the `PWRQSTN` (power status) command
after you select a discovered receiver. You can send commands to the connected
receiver by typeing them into the text field below the output window, followed by
"return". For example, on a TX-NR616, other commands you can try are:

- `PWRQSTN`: query power status
- `PWR01`: set system to on
- `PWR00`: set system to standby
- `AMTQSTN`: query mute status
- `AMT01`: set mute on
- `AMT00`: set mute off
- `MVLQSTN`: query master volume status
- `MVL??`: set master volume to ??, ?? is 00-64 in hexadecimal
- `MVLUP`: set master volume up
- `MVLDOWN`: set master volume down

Refer to the [eISCP protocol documentation][eiscp-protocol] for other receivers and commands.

[eiscp-protocol]:http://michael.elsdoerfer.name/onkyo/ISCP-V1.21_2011.xls "Integra Serial Communication Protocol for AV Receiver"

![Usage Example](/../screenshots/usage.png?raw=true "Usage Example")
