import os

def generate_readme(root_dir, repo_url):
    readme_path = os.path.join(root_dir, 'README.md')
    
    with open(readme_path, 'at+', encoding='utf-8') as readme_file:
        readme_file.write("## 文件目录\n\n")
        readme_file.write("点击以下链接直接跳转到对应的代码文件：\n\n")

        for dirpath, _, filenames in os.walk(root_dir):
            # 排除不必要的隐藏目录
            if '.git' in dirpath or '.idea' in dirpath or '.vscode' in dirpath:
                continue
            
            # 提取目录的相对路径
            relative_dir = os.path.relpath(dirpath, root_dir)
            
            # 获取目录下的所有 `.c` 文件
            c_files = [f for f in filenames if f.endswith('.c')]
            if c_files:
                readme_file.write(f"### {relative_dir}\n\n")
                
                for file in c_files:
                    # 构造 GitHub 文件链接
                    file_path = os.path.join(relative_dir, file).replace("\\", "/")
                    file_url = f"{repo_url}/blob/master/{file_path}"
                    readme_file.write(f"- [{file.replace('.c', '')}]({file_url})\n")
                
                readme_file.write("\n")

if __name__ == "__main__":
    # 仓库的本地路径
    root_dir = r"."
    # 仓库的 GitHub URL (例如你的GitHub仓库URL)
    repo_url = "https://github.com/GamerNoTitle/Anyview-Programming2024-Reference"
    
    generate_readme(root_dir, repo_url)
    print("README.md 已生成。")