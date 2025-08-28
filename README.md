# 📌 Git Commit Convention

효율적인 협업과 깔끔한 히스토리 관리를 위해 다음 규칙을 따릅니다.

---

## ✅ Commit Type (커밋 유형)

| **Type**      | **설명**                                  |
|---------------|------------------------------------------|
| ✨ **feat**   | 새로운 기능 추가, 기존 기능 요구사항 수정 |
| 🐞 **fix**    | 기능 관련 버그 수정                      |
| 🛠 **build**  | 빌드 관련 수정 / 모듈 설치 또는 삭제      |
| 📦 **chore**  | 패키지 매니저 수정, 기타 변경 (예: `.gitignore`) |
| 🔄 **ci**     | CI 관련 설정 수정                        |
| 📚 **docs**   | 문서(주석) 수정                          |
| 🎨 **style**  | 코드 스타일, 포맷팅 (로직 변경 없음)      |
| ♻ **refactor**| 기능 변화 없는 코드 리팩토링 (예: 변수명 변경) |
| ✅ **test**   | 테스트 코드 추가 / 수정                  |
| 🚀 **release**| 버전 릴리즈                              |

---

## ✅ Commit Message 구조

```
<type>: <subject>
```

예시:

```
feat: Add login API
fix: Correct typo in README
docs: Update contributing guide
```

---

## ✅ 상세 규칙

- **type**: 반드시 위 표에서 선택
- **subject**: 간결하고 명확하게 작성 (50자 이내)
- **본문(body)**: 선택 사항 (구체적인 변경 내용 설명)
- **꼬리말(footer)**: 이슈 트래킹 시 `Closes #이슈번호` 형태로 작성 가능

---

## 📌 예시 Commit 메시지

```
feat: Add user authentication API

- JWT 기반 인증 로직 추가
- 로그인 및 회원가입 API 구현
```

---

## ✅ Commit Message 템플릿

`.gitmessage.txt` 파일에 아래 내용을 추가하세요.

```
# <type>: <subject>
# subject는 50자 이내로 간결하게 작성하세요.
# body는 선택 사항입니다. 변경 내용을 구체적으로 적어주세요.
# footer는 이슈 번호를 닫을 때 사용합니다.

type: 
subject: 

body:
- 변경 사항 1
- 변경 사항 2

footer:
Closes #
```

Git 설정 적용:
```
git config --global commit.template ~/.gitmessage.txt
```

---

### 🛠 추천 워크플로우
1. **작업 단위 최소화** → 작은 변경도 커밋
2. **의미 있는 메시지 작성** → 한눈에 목적 이해 가능
3. **공유 전 `pull` → `push`** 순서 준수

---

# ✅ 참여 규칙 (Participation Rules)

팀원 모두가 일관성 있고 성실하게 참여하기 위해 아래 규칙을 준수합니다.

---

## 📅 확인 주기
- **확인일:** 매주 **금요일**
- 담당자가 주간 활동을 확인합니다.

---

## ✅ 활동 규칙
- **주당 최소 커밋 개수:** **3개 이상**
- **커밋 타입:** 자유 (본인의 양심에 따라 성실하게 작성)
- **활동 기간:** 지속적 참여를 권장합니다.

---

## 🗂 인증 방식
- **공용 GitHub Repository**를 사용합니다.
- 각자 본인 전용 디렉토리 내에 활동 기록을 업로드하세요.
- **폴더 구조 예시:**
  ```
  week08/
    your_file1.py
    your_file2.md
  week09/
    your_file3.py
  ```

---

## 🙏 마음가짐
- **겸허하고 성실한 자세**로 참여합니다.
- 규칙은 모두의 성장과 협업을 위해 존재합니다.

---

💡 **Tip:** 꾸준함이 최고의 실력입니다. 작은 실천이 큰 변화를 만듭니다!