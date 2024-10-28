# pythonの勉強

```
def get_image_paths(dataframe: pd.DataFrame, image_folder_path: str) -> list:
    """
    DataFrameのfile_pathカラムからファイル名を抽出し、画像フォルダのパスと結合してリストを作成する関数

    Args:
      dataframe: file_pathカラムを持つDataFrame
      image_folder_path: 画像フォルダのパス

    Returns:
      画像ファイルのパスのリスト
    """
    # ファイル名を抽出して画像フォルダのパスと結合
    image_paths = [
        os.path.join(image_folder_path, os.path.basename(file_path))
        for file_path in dataframe['file_path']
    ]
    
    return image_paths
```
