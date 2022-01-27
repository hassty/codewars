from re import search

def domain_name(url):
    return search(r'(www\.|https?:\/\/|)*([^\.]*)', url).group(2)