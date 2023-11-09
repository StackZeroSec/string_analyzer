import sys
import json
import re

def find_strings(filename, patterns, min_length=4):
    with open(filename, 'rb') as f:
        content = f.read().decode('ascii', 'ignore')  # decode with ASCII and ignore non-ASCII bytes

        results = []

        # Define a general regex for ASCII strings when "all" is used
        ascii_regex = re.compile(r'[ -~]{' + str(min_length) + r',}')

        for pattern_name, pattern_regex in patterns.items():
            if pattern_name == 'all':  # If the 'all' command is used, look for any ASCII string
                matches = ascii_regex.findall(content)
            else:
                matches = re.findall(pattern_regex, content)
            for match in matches:
                results.append(match)

        return results

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python strings_analyzer.py <filename> <pattern1,pattern2,...>")
        print("Use 'all' for pattern to get all strings.")
        sys.exit(1)

    filename = sys.argv[1]
    chosen_patterns = sys.argv[2].split(',')

    # Load regex patterns from the config file
    with open("patterns.json", "r") as f:
        all_patterns = json.load(f)

    # Prepare the pattern dictionary
    if 'all' in chosen_patterns:
        patterns = {'all': None}
    else:
        patterns = {k: all_patterns[k] for k in chosen_patterns if k in all_patterns}

    for s in find_strings(filename, patterns):
        print(s)
