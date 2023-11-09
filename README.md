# Python String Analyzer for Malware Forensics

Welcome to the repository for the Python String Analyzer, an advanced tool for static malware analysis via string extraction. This tool enhances the traditional 'strings' command with extended functionality for modern cybersecurity needs.

## Overview

This tool allows for the extraction of human-readable strings from binary files to aid in understanding malware. It's equipped with regex pattern matching, making it a more powerful alternative to the UNIX 'strings' utility.

## Features

- **ASCII String Extraction**: Extract readable ASCII strings from binary files to analyze potential malware.
- **Customizable Regex Matching**: Use regular expressions to match complex patterns within binaries.
- **CLI Support**: Easily integrate this tool into your forensic analysis workflow with command-line arguments.
- **Non-ASCII Support**: Extend your analysis to non-ASCII characters for comprehensive malware investigations.
- **JSON Configuration**: Manage your regex patterns with an easy-to-update JSON configuration file.

## Getting Started

### Prerequisites

- Python 3.x installed on your system.
- A binary file that you wish to analyze.

### Installation

To get started with the Python String Analyzer, clone this repository:

```bash
git clone https://github.com/StackZeroSec/string_analyzer.git
```

Then, move into the project directory:

```bash

cd python-string-analyzer
```
### Usage

Run the tool from your terminal with the following command:

```bash

python strings_analyzer.py <filename> <pattern1,pattern2,...>
```
Use 'all' to extract all ASCII strings from the file.
Configuration

Modify the patterns.json file to add or alter the regex patterns:

```json

{
    "url": "regex_for_url",
    "ipv4": "regex_for_ipv4",
    // Extend with more patterns as required
}
```
### Contributing

Contributions are welcome! To contribute:

- Fork the repo.
- Create a feature branch (git checkout -b feature/fooBar).
- Commit your changes (git commit -am 'Add some fooBar').
- Push to the branch (git push origin feature/fooBar).
- Create a new Pull Request.

### Future Enhancements

- **Encoding Support:** Incorporate UTF-8 and other encodings for broader string analysis.
- **Pattern Library:** Expand the regex library with more patterns to detect various malware.
- **Large File Handling:** Implement chunk processing for efficiency with large binary files.

### License

Distributed under the GNU GENERAL PUBLIC LICENSE Version 3 License. See LICENSE for more information.

### Acknowledgments

- Hats off to the UNIX 'strings' utility for the inspiration.
- Gratitude to the cybersecurity community for continuous collaboration.

### Further Reading

For a complete tutorial on using this tool, please visit [StackZero's Python String Analysis Tutorial](https://www.stackzero.net/python-string-analysis).


Happy Analyzing!
