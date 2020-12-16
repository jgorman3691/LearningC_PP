# 1 "C:\\Users\\jedgo\\Projects\\Learning C++\\.vscode\\tasks.json"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "C:\\Users\\jedgo\\Projects\\Learning C++\\.vscode\\tasks.json"
{


   "version": "2.0.0",
   "tasks": [
      {
         "label": "echo",
         "type": "shell",
         "command": "cpp",
         "args" : [
            "-o",
            "${file}.cpp",
            "${file}"
         ],
         "group" : {
            "kind" : "build",
            "isDefault": true
         }
      }
   ]
}
