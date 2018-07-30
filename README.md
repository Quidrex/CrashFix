# CrashFix

This is a fix for USB microphone stuttering and other USB issues occuring while playing Crash Bandicoot N. Sane Trilogy.

The issue with Crash is that it tries to enumerate all DirectInput devices, i.e. search for new controllers, about 10 times a second which is both I/O intensive and completely unnecessary as Crash does not even support legacy DirectInput controllers. The fix works by faking the DirectInput DLL to always report 0 input devices without actually doing any I/O.

## Installation

Copy `dinput8.dll` to `$YOUR_STEAM_LIBRARY_FOLDER\steamapps\common\Crash Bandicoot - N Sane Trilogy\`

## License

Copyright (c) 2018 Gian Perrone

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
