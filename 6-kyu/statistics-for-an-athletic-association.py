import datetime
import statistics

def to_seconds(time):
    h,m,s = time.split('|')
    return datetime.timedelta(hours=int(h), minutes=int(m), seconds=int(s)).seconds

def from_seconds(seconds):
    time = str(datetime.timedelta(seconds=seconds)).split(':')
    return '|'.join([i.zfill(2) for i in time])

def stat(strg):
    if strg == "":
        return ""

    seconds = list(map(lambda x: to_seconds(x), strg.split(',')))

    range = from_seconds(max(seconds) - min(seconds))
    average = from_seconds(int(statistics.mean(seconds)))
    median = from_seconds(int(statistics.median(seconds)))

    return f'Range: {range} Average: {average} Median: {median}'