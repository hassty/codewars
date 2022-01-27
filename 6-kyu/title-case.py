def title_case(title, minor_words=''):
    return ' '.join([i.title() if i.lower() not in minor_words.lower().split() or title.index(i) == 0 else i.lower() for i in title.split()])