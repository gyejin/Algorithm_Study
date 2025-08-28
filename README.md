📌 Git Commit Convention

효율적인 협업과 깔끔한 히스토리 관리를 위해 다음 규칙을 따릅니다.

✅ Commit Type (커밋 유형)
Type	설명
feat	✨ 새로운 기능 추가, 기존 기능 요구사항 수정
fix	🐞 기능 관련 버그 수정
build	🛠️ 빌드 관련 수정 / 모듈 설치 또는 삭제
chore	📦 패키지 매니저 수정, 기타 변경 (예: .gitignore 수정)
ci	🔄 CI 관련 설정 수정
docs	📚 문서(주석) 수정
style	🎨 코드 스타일, 포맷팅 (로직 변경 없음)
refactor	♻️ 기능 변화 없는 코드 리팩토링 (예: 변수명 변경)
test	✅ 테스트 코드 추가 / 수정
release	🚀 버전 릴리즈
✅ Commit Message 구조
<type>: <subject>


예시:

feat: Add login API
fix: Correct typo in README
docs: Update contributing guide

✅ 규칙 요약

type: 반드시 위 표에서 선택

subject: 간결하고 명확하게 작성

본문(body): 선택 사항 (구체적인 변경 내용 설명)

꼬리말(footer): 이슈 트래킹 시 Closes #이슈번호 형태로 작성 가능

📌 예시 Commit 메시지
feat: Add user authentication API

- JWT 기반 인증 로직 추가
- 로그인 및 회원가입 API 구현


💡 Tip: type과 subject 사이에는 콜론(:) 뒤에 공백을 꼭 넣어주세요!

🛠 추천 워크플로우

작업 단위 최소화 → 작은 변경도 커밋

의미 있는 메시지 작성 → 한눈에 목적 이해 가능

공유 전 pull → push 순서 준수
