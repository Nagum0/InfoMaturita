class Solution:
    def checkURL(self, url: str) -> str:
        protocol = url.split(":")[0]
        domain = url.split("//")[1].split(".")[0]

        return f"Protocol: {protocol}\nDomain: {domain}"

s = Solution()
print(s.checkURL("https://drive.google.com/drive/u/0/folders/12Bejvilr5YM637pbsAQPG5Ad00womCmj"))
