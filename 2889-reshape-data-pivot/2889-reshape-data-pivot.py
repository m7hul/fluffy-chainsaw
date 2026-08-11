import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
    final = weather.pivot(index='month', columns='city', values='temperature')
    return final