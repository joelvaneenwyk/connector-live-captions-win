# get-live-captions-cpp

Get real time content of Windows System APP "Live Captions" [win+ctrl+L], write content into file. using c++/winrt, asio

check sibling project [get-live-captions-rs](https://github.com/corbamico/get-live-captions-rs)

## Usage

```cmd
Usage: get-live-captions file
Options:
  file            filename, to save content of live captions running.
```

## UIAutomation

To find the LiveCaptions GUI AutomationID, you may need tools as [inspect](https://learn.microsoft.com/en-us/windows/win32/winauto/inspect-objects), or [Automation-Spy](https://github.com/ddeltasolutions/Automation-Spy)

![Screenshot of GUI](./doc/image.png)

## License

Licensed under either of

* Apache License, Version 2.0
   ([LICENSE-APACHE](LICENSE-APACHE) or <http://www.apache.org/licenses/LICENSE-2.0>)
* MIT license
   ([LICENSE-MIT](LICENSE-MIT) or <http://opensource.org/licenses/MIT>)

at your option.

## Contribution

Unless you explicitly state otherwise, any contribution intentionally submitted
for inclusion in the work by you, as defined in the Apache-2.0 license, shall be
dual licensed as above, without any additional terms or conditions.
