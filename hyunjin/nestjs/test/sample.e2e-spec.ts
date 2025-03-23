import { Test, TestingModule } from '@nestjs/testing';
import { INestApplication } from '@nestjs/common';
import * as request from 'supertest';
import { SampleModule } from 'src/sample/sample.module';

describe('SampleController (e2e)', () => {
  let app: INestApplication;

  beforeEach(async () => {
    const moduleFixture: TestingModule = await Test.createTestingModule({
      imports: [SampleModule],
    }).compile();

    app = moduleFixture.createNestApplication();
    await app.init();
  });

  afterEach(async () => {
    await app.close();
  });

  it('GET /sample', () => {
    return request(app.getHttpServer())
      .get('/sample')
      .expect(200)
      .expect('Hello World TWO!');
  });
});
