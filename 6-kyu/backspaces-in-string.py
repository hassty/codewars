def clean_string(s):
    s = s.lstrip('#')
    i = s.find('#')
    if i == -1 or len(s) == 0:
        return s

    return clean_string(s[:i - 1] + s[i + 1:])